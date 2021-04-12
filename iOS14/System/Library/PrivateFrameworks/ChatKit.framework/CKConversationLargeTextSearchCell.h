/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListLargeTextCell.h>
#import <libobjc.A.dylib/CKConversationSearchCellProtocol.h>

@class NSString;

@interface CKConversationLargeTextSearchCell : CKConversationListLargeTextCell <CKConversationSearchCellProtocol> {

	UIEdgeInsets marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (assign,nonatomic,__weak) id<CKConversationSearchCellDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6 ;
-(id)avatarView;
-(void)layoutSubviews;
-(void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 ;
@end

