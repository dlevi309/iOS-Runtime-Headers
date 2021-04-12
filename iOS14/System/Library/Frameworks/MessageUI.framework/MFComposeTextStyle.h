/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString;

@interface MFComposeTextStyle : NSObject {

	NSString* _imageName;
	NSString* _accessibilityIdenitifier;
	SEL _editSelector;
	long long _styleType;

}

@property (nonatomic,copy,readonly) NSString * imageName;                             //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibilityIdenitifier;              //@synthesize accessibilityIdenitifier=_accessibilityIdenitifier - In the implementation block
@property (nonatomic,readonly) SEL editSelector;                                      //@synthesize editSelector=_editSelector - In the implementation block
@property (nonatomic,readonly) long long styleType;                                   //@synthesize styleType=_styleType - In the implementation block
+(SEL)editSelectorForTextStyleType:(long long)arg1 ;
+(id)accessibilityIdenitifierForTextStyleType:(long long)arg1 ;
+(id)imageNameForTextStyleType:(long long)arg1 ;
+(id)composeTextStyleForTextStyleType:(long long)arg1 ;
+(BOOL)isTextListStyleOrdered:(id)arg1 ;
-(NSString *)imageName;
-(id)initWithTextStyleType:(long long)arg1 ;
-(NSString *)accessibilityIdenitifier;
-(SEL)editSelector;
-(long long)styleType;
@end

