/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)assetType;
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(BOOL)isDisplayingAttachmentContent;

@end

