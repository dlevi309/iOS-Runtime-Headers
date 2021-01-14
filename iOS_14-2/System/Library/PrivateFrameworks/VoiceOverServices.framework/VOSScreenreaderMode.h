/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSString;

@interface VOSScreenreaderMode : NSObject {

	NSString* _rawValue;

}

@property (nonatomic,readonly) NSString * rawValue; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)allModes;
+(id)Invalid;
+(id)Default;
+(id)Handwriting;
+(id)BrailleScreenInput;
+(id)modeWithStringValue:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)rawValue;
-(id)description;
-(id)_initWithRawValue:(id)arg1 ;
@end

