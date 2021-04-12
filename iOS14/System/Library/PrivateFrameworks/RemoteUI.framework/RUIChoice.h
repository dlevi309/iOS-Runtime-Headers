/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)tintColor;
-(NSString *)title;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)typeForChoiceString:(id)arg1 ;
-(unsigned long long)choiceType;
@end

