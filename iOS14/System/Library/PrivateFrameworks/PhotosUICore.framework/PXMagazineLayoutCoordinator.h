/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXMagazineRectArray, NSArray, NSMutableArray;

@interface PXMagazineLayoutCoordinator : NSObject {

	PXMagazineRectArray* _fallbackLayout;
	double _currentBestScore;
	BOOL _stopIfAnyGoodLayout;
	BOOL _stop;
	NSArray* _paddingInputs;
	double _tileAspectRatio;
	NSMutableArray* _qualifiedLayouts;
	PXMagazineRectArray* _currentLayout;
	unsigned long long _currentIndex;

}

@property (nonatomic,readonly) NSArray * paddingInputs;                        //@synthesize paddingInputs=_paddingInputs - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                         //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL stopIfAnyGoodLayout;                       //@synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout - In the implementation block
@property (nonatomic,retain) NSMutableArray * qualifiedLayouts;                //@synthesize qualifiedLayouts=_qualifiedLayouts - In the implementation block
@property (nonatomic,retain) PXMagazineRectArray * currentLayout;              //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                  //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) BOOL stop;                                        //@synthesize stop=_stop - In the implementation block
-(unsigned long long)currentIndex;
-(PXMagazineRectArray *)currentLayout;
-(void)setStop:(BOOL)arg1 ;
-(void)setCurrentLayout:(PXMagazineRectArray *)arg1 ;
-(BOOL)stop;
-(BOOL)validateCurrentLayout;
-(void)validateCurrentLayoutAsFallback;
-(double)scoreOfLayout:(id)arg1 ;
-(unsigned long long)currentLayoutsCount;
-(id)currentBestLayout;
-(NSArray *)paddingInputs;
-(double)tileAspectRatio;
-(BOOL)stopIfAnyGoodLayout;
-(NSMutableArray *)qualifiedLayouts;
-(void)setQualifiedLayouts:(NSMutableArray *)arg1 ;
-(id)initWithPaddingInputs:(id)arg1 tileAspectRatio:(double)arg2 stopIfAnyGoodLayout:(BOOL)arg3 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
@end

