/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)accessibilityIdenitifierForTextStyleType:(long long)arg1 ;
+(id)imageNameForTextStyleType:(long long)arg1 ;
+(id)composeTextStyleForTextStyleType:(long long)arg1 ;
+(BOOL)isTextListStyleOrdered:(id)arg1 ;
+(SEL)editSelectorForTextStyleType:(long long)arg1 ;
-(NSString *)imageName;
-(long long)styleType;
-(id)initWithTextStyleType:(long long)arg1 ;
-(NSString *)accessibilityIdenitifier;
-(SEL)editSelector;
@end

