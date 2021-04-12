/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


@class NSString;

@interface AUPasscodeCodecCommandLineOption : NSObject {

	NSString* _optionSyntax;
	NSString* _optionDescription;

}

@property (nonatomic,readonly) NSString * optionSyntax;                   //@synthesize optionSyntax=_optionSyntax - In the implementation block
@property (nonatomic,readonly) NSString * optionDescription;              //@synthesize optionDescription=_optionDescription - In the implementation block
+(id)optionWithSyntax:(id)arg1 description:(id)arg2 ;
-(NSString *)optionDescription;
-(id)initWithSyntax:(id)arg1 description:(id)arg2 ;
-(NSString *)optionSyntax;
@end

