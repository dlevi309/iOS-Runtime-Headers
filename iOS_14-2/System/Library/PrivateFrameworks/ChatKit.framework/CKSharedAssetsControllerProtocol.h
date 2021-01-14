/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(unsigned long long)assetType;
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CGSize*)contentSizeThatFits:(CGSize)arg1;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;
-(BOOL)isDisplayingAttachmentContent;

@end

