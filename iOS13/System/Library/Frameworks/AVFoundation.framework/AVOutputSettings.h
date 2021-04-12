/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying> {

	NSDictionary* _outputSettingsDictionary;

}

@property (nonatomic,readonly) NSSet * compatibleMediaTypes; 
@property (nonatomic,readonly) BOOL willYieldCompressedSamples; 
@property (nonatomic,readonly) NSDictionary * outputSettingsDictionary;              //@synthesize outputSettingsDictionary=_outputSettingsDictionary - In the implementation block
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)registeredOutputSettingsClasses;
+(id)eligibleOutputSettingsDictionaryKeys;
+(unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2 ;
+(BOOL)supportsEmptyOutputSettingsDictionary;
+(unsigned long long)validateOutputSettingsDictionary:(id)arg1 ;
+(id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 ;
+(id)defaultOutputSettingsForMediaType:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)compatibleMediaTypes;
-(BOOL)willYieldCompressedSamples;
-(NSDictionary *)outputSettingsDictionary;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
@end

