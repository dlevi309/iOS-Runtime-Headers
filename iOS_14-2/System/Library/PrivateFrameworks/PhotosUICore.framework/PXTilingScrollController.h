/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXTilingScrollInfo;


@protocol PXTilingScrollController <NSObject>
@property (assign,nonatomic,__weak) id<PXTilingScrollControllerUpdateDelegate> updateDelegate; 
@property (nonatomic,readonly) CGSize referenceSize; 
@property (nonatomic,readonly) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect activeRect; 
@property (nonatomic,readonly) CGRect visibleRect; 
@property (nonatomic,readonly) CGRect constrainedVisibleRect; 
@property (nonatomic,readonly) CGRect targetRect; 
@property (assign,nonatomic) CGRect contentBounds; 
@property (nonatomic,copy) PXTilingScrollInfo * scrollInfo; 
@property (assign,nonatomic) BOOL respectsContentZOrder; 
@property (assign,nonatomic) CGSize presentedContentSize; 
@required
-(CGRect)contentBounds;
-(void)setNeedsUpdate;
-(CGRect)visibleRect;
-(PXTilingScrollInfo *)scrollInfo;
-(UIEdgeInsets)contentInset;
-(void)setContentBounds:(CGRect)arg1;
-(void)setScrollInfo:(id)arg1;
-(CGRect)constrainedVisibleRect;
-(void)setPresentedContentSize:(CGSize)arg1;
-(void)updateIfNeeded;
-(CGSize)referenceSize;
-(CGRect)targetRect;
-(CGSize)presentedContentSize;
-(void)setRespectsContentZOrder:(BOOL)arg1;
-(id<PXTilingScrollControllerUpdateDelegate>)updateDelegate;
-(void)setUpdateDelegate:(id)arg1;
-(CGRect)activeRect;
-(BOOL)respectsContentZOrder;

@end

