/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUSetting.h>

@interface NUOpaqueSetting : NUSetting
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)supportedAttributes;
-(BOOL)validate:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isValid:(out id*)arg1 ;
-(id)serialize:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)deserialize:(id)arg1 error:(out id*)arg2 ;
-(BOOL)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3 ;
-(BOOL)validatePlistCompatibility:(id)arg1 error:(out id*)arg2 ;
@end

