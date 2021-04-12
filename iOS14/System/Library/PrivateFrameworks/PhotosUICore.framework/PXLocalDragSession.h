/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXLocalDragSessionDelegate, UIDragSession, UIDropSession;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXVelocityNumberFilter, NSSet, PXAssetReference, PXAssetCollectionActionPerformer;

@interface PXLocalDragSession : NSObject {

	PXVelocityNumberFilter* _horizontalVelocity;
	PXVelocityNumberFilter* _verticalVelocity;
	BOOL _isDragSessionActive;
	BOOL _isDropActiveInsideView;
	long long _identifier;
	id<PXLocalDragSessionDelegate> _delegate;
	id<UIDragSession> _dragSession;
	NSSet* _draggedAssetReferences;
	id<UIDropSession> _dropSession;
	PXAssetReference* _dropTargetAssetReference;
	PXAssetReference* _hitAssetReference;
	PXAssetCollectionActionPerformer* _dropActionPerformer;
	unsigned long long _dropOperation;
	NSSet* _excludedAssets;
	CGPoint _scrollViewLocation;

}

@property (nonatomic,readonly) long long identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGPoint scrollViewLocation;                                          //@synthesize scrollViewLocation=_scrollViewLocation - In the implementation block
@property (nonatomic,readonly) CGPoint velocity; 
@property (assign,nonatomic,__weak) id<PXLocalDragSessionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIDragSession> dragSession;                                //@synthesize dragSession=_dragSession - In the implementation block
@property (assign,nonatomic) BOOL isDragSessionActive;                                            //@synthesize isDragSessionActive=_isDragSessionActive - In the implementation block
@property (nonatomic,retain) NSSet * draggedAssetReferences;                                      //@synthesize draggedAssetReferences=_draggedAssetReferences - In the implementation block
@property (assign,nonatomic,__weak) id<UIDropSession> dropSession;                                //@synthesize dropSession=_dropSession - In the implementation block
@property (assign,nonatomic) BOOL isDropActiveInsideView;                                         //@synthesize isDropActiveInsideView=_isDropActiveInsideView - In the implementation block
@property (nonatomic,retain) PXAssetReference * dropTargetAssetReference;                         //@synthesize dropTargetAssetReference=_dropTargetAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetReference * hitAssetReference;                                //@synthesize hitAssetReference=_hitAssetReference - In the implementation block
@property (nonatomic,retain) PXAssetCollectionActionPerformer * dropActionPerformer;              //@synthesize dropActionPerformer=_dropActionPerformer - In the implementation block
@property (assign,nonatomic) unsigned long long dropOperation;                                    //@synthesize dropOperation=_dropOperation - In the implementation block
@property (nonatomic,retain) NSSet * excludedAssets;                                              //@synthesize excludedAssets=_excludedAssets - In the implementation block
-(PXAssetReference *)dropTargetAssetReference;
-(NSSet *)draggedAssetReferences;
-(void)setDropTargetAssetReference:(PXAssetReference *)arg1 ;
-(void)setDraggedAssetReferences:(NSSet *)arg1 ;
-(id<UIDropSession>)dropSession;
-(CGPoint)velocity;
-(id)init;
-(void)setHitAssetReference:(PXAssetReference *)arg1 ;
-(id<PXLocalDragSessionDelegate>)delegate;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(NSSet *)excludedAssets;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(void)setExcludedAssets:(NSSet *)arg1 ;
-(void)setDelegate:(id<PXLocalDragSessionDelegate>)arg1 ;
-(BOOL)isDragSessionActive;
-(unsigned long long)dropOperation;
-(BOOL)isDropActiveInsideView;
-(PXAssetCollectionActionPerformer *)dropActionPerformer;
-(void)setDropActionPerformer:(PXAssetCollectionActionPerformer *)arg1 ;
-(void)setIsDropActiveInsideView:(BOOL)arg1 ;
-(void)setDropOperation:(unsigned long long)arg1 ;
-(void)setScrollViewLocation:(CGPoint)arg1 ;
-(void)updateWithDataSource:(id)arg1 ;
-(id)horizontalVelocity;
-(id)verticalVelocity;
-(void)_noteChanged:(SEL)arg1 ;
-(CGPoint)scrollViewLocation;
-(id<UIDragSession>)dragSession;
-(long long)identifier;
-(void)setIsDragSessionActive:(BOOL)arg1 ;
-(PXAssetReference *)hitAssetReference;
@end

