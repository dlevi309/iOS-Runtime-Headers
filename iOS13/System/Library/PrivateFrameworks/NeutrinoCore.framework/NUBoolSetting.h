/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@class NSNumber;

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber * defaultValue; 
@property (readonly) NSNumber * identityValue; 
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(NSNumber *)defaultValue;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isValid:(out id*)arg1 ;
-(NSNumber *)identityValue;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)makeJSValue:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
@end

