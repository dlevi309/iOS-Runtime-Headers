/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@interface AXDisplayLinkManagerTargetAction : NSObject {

	id _target;
	SEL _actionSelector;
	unsigned long long _displayDidRefreshCount;

}

@property (nonatomic,retain) id target;                                              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                                     //@synthesize actionSelector=_actionSelector - In the implementation block
@property (assign,nonatomic) unsigned long long displayDidRefreshCount;              //@synthesize displayDidRefreshCount=_displayDidRefreshCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setActionSelector:(SEL)arg1 ;
-(SEL)actionSelector;
-(unsigned long long)displayDidRefreshCount;
-(void)setDisplayDidRefreshCount:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 ;
-(void)displayDidRefresh:(id)arg1 ;
@end

