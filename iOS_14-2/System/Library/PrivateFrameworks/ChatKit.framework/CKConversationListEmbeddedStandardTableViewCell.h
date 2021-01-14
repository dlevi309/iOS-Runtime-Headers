/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListStandardCell.h>
#import <libobjc.A.dylib/CKConversationListEmbeddedTableViewCellProtocol.h>

@class NSString;

@interface CKConversationListEmbeddedStandardTableViewCell : CKConversationListStandardCell <CKConversationListEmbeddedTableViewCellProtocol> {

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
-(void)prepareForReuse;
-(void)setContainerBounds:(CGRect)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(CGRect)containerBounds;
-(id)chevronImageView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

