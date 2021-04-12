/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, UIView;

@interface CNSharingProfileRowItem : NSObject {

	BOOL _isSelected;
	NSString* _label;
	UIView* _accessoryView;

}

@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;              //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
-(NSString *)label;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(UIView *)accessoryView;
-(id)initWithLabel:(id)arg1 accessoryView:(id)arg2 ;
@end

