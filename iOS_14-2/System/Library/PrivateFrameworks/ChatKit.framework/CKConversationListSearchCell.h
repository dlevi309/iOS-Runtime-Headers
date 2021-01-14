/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListStandardCell.h>
#import <libobjc.A.dylib/CKConversationSearchCellProtocol.h>

@class NSString;

@interface CKConversationListSearchCell : CKConversationListStandardCell <CKConversationSearchCellProtocol> {

	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                         //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic,__weak) id<CKConversationSearchCellDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)fromLabel;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 ;
-(double)leadingLayoutMargin;
@end

