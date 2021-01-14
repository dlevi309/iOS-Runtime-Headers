/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber * defaultValue; 
@property (readonly) NSNumber * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(NSNumber *)defaultValue;
-(NSNumber *)identityValue;
-(BOOL)isValid:(out id*)arg1 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end

