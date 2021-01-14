/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKConversationSearchCellProtocol <NSObject>
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,nonatomic,__weak) id<CKConversationSearchCellDelegate> delegate; 
@required
-(id<CKConversationSearchCellDelegate>)delegate;
-(id)avatarView;
-(void)setDelegate:(id)arg1;
-(id)fromLabel;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2;

@end

