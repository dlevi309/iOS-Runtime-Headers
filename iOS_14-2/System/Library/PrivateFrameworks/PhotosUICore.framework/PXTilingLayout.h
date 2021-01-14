/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXTilingLayoutObserver;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXTilingScrollInfo, PXTilingCoordinateSpace;

@interface PXTilingLayout : NSObject {

	PXTilingScrollInfo* _scrollInfo;
	void* _coordinateSpaceIdentifier;
	id<PXTilingLayoutObserver> _observer;
	PXTilingCoordinateSpace* _coordinateSpace;
	CGSize _referenceSize;
	CGSize _visibleSize;
	CGPoint _visibleOrigin;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic,__weak) id<PXTilingLayoutObserver> observer;               //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) PXTilingCoordinateSpace * coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) BOOL shouldFlipHorizontally; 
@property (assign,nonatomic) CGSize referenceSize;                                     //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) CGSize visibleSize;                                       //@synthesize visibleSize=_visibleSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) CGPoint visibleOrigin;                                    //@synthesize visibleOrigin=_visibleOrigin - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) CGRect scrollBounds; 
@property (nonatomic,copy,readonly) PXTilingScrollInfo * scrollInfo;                   //@synthesize scrollInfo=_scrollInfo - In the implementation block
@property (nonatomic,readonly) void* coordinateSpaceIdentifier;                        //@synthesize coordinateSpaceIdentifier=_coordinateSpaceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL allowHorizontalFlip; 
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(CGRect)visibleRect;
-(void)setObserver:(id<PXTilingLayoutObserver>)arg1 ;
-(id)init;
-(id<PXTilingLayoutObserver>)observer;
-(PXTilingCoordinateSpace *)coordinateSpace;
-(PXTilingScrollInfo *)scrollInfo;
-(UIEdgeInsets)contentInset;
-(CGRect)scrollBounds;
-(BOOL)allowHorizontalFlip;
-(BOOL)shouldFlipHorizontally;
-(void)setVisibleSize:(CGSize)arg1 ;
-(CGPoint)visibleOrigin;
-(void*)coordinateSpaceIdentifier;
-(CGSize)referenceSize;
-(CGSize)visibleSize;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(PXTileGeometry*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setVisibleOrigin:(CGPoint)arg1 ;
@end

