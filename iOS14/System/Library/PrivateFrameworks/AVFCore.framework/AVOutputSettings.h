/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface AVOutputSettings : NSObject <NSCopying> {

	NSDictionary* _outputSettingsDictionary;

}

@property (nonatomic,readonly) NSSet * compatibleMediaTypes; 
@property (nonatomic,readonly) BOOL willYieldCompressedSamples; 
@property (nonatomic,readonly) NSDictionary * outputSettingsDictionary;              //@synthesize outputSettingsDictionary=_outputSettingsDictionary - In the implementation block
+(unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2 ;
+(BOOL)supportsEmptyOutputSettingsDictionary;
+(unsigned long long)validateOutputSettingsDictionary:(id)arg1 ;
+(id)outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 ;
+(id)defaultOutputSettingsForMediaType:(id)arg1 ;
+(id)registeredOutputSettingsClasses;
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id*)arg3 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(NSSet *)compatibleMediaTypes;
-(NSDictionary *)outputSettingsDictionary;
-(id)init;
-(id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)description;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)willYieldCompressedSamples;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

