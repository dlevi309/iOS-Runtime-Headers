/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKConversationListEmbeddedTableViewCellProtocol <NSObject>
@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate; 
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,nonatomic) BOOL shouldHidePreviewSummary; 
@property (assign,nonatomic) CGRect containerBounds; 
@required
-(NSObject*<CKConversationListCellDelegate>)delegate;
-(void)updateContentsForConversation:(id)arg1;
-(id)avatarView;
-(void)setDelegate:(id)arg1;
-(void)didHoverOverCell:(id)arg1;
-(void)setEditingPins:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setContainerBounds:(CGRect)arg1;
-(void)setShouldHidePreviewSummary:(BOOL)arg1;
-(void)updateContentsForConversation:(id)arg1 fastPreview:(BOOL)arg2;
-(BOOL)shouldHidePreviewSummary;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1;
-(CGRect)containerBounds;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg1 forConversation:(id)arg2 animated:(BOOL)arg3;

@end

