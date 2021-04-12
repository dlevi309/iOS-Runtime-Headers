/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListLargeTextCell.h>
#import <libobjc.A.dylib/CKConversationListEmbeddedTableViewCellProtocol.h>

@class NSString;

@interface CKConversationListEmbeddedLargeTextTableViewCell : CKConversationListLargeTextCell <CKConversationListEmbeddedTableViewCellProtocol> {

	UIEdgeInsets _marginInsets;
	CGRect _containerBounds;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListCellDelegate> delegate; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                              //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePreviewSummary; 
@property (assign,nonatomic) CGRect containerBounds;                                                 //@synthesize containerBounds=_containerBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)avatarView;
-(void)setContainerBounds:(CGRect)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(CGRect)containerBounds;
-(BOOL)avatarView:(id)arg1 shouldShowContact:(id)arg2 ;
-(void)forceUnreadIndicatorVisibility:(BOOL)arg1 forConversation:(id)arg2 animated:(BOOL)arg3 ;
@end

