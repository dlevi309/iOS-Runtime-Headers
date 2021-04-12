/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, NSAttributedString;

@interface WFActionDescriptionItem : NSObject {

	NSString* _itemTitle;
	NSAttributedString* _itemDescription;

}

@property (nonatomic,readonly) NSString * itemTitle;                              //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,readonly) NSAttributedString * itemDescription;              //@synthesize itemDescription=_itemDescription - In the implementation block
+(id)itemWithTitle:(id)arg1 description:(id)arg2 ;
+(id)itemWithTitle:(id)arg1 attributedDescription:(id)arg2 ;
-(NSString *)itemTitle;
-(NSAttributedString *)itemDescription;
-(id)initWithTitle:(id)arg1 description:(id)arg2 ;
@end

