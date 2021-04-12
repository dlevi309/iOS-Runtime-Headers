/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

