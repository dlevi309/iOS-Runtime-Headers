/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@class NSString, UIColor;

@interface RUIChoice : RUIElement {

	unsigned long long _choiceType;
	NSString* _title;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) unsigned long long choiceType;              //@synthesize choiceType=_choiceType - In the implementation block
@property (nonatomic,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
-(NSString *)title;
-(UIColor *)tintColor;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)typeForChoiceString:(id)arg1 ;
-(unsigned long long)choiceType;
@end

