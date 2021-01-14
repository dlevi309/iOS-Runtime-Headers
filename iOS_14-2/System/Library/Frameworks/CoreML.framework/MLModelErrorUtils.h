/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLModelErrorUtils : NSObject
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithIntegerCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char*)arg3 ;
+(id)genericErrorWithFormat:(id)arg1 ;
+(id)privateErrorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 ;
+(id)updateErrorWithFormat:(id)arg1 ;
+(id)featureTypeErrorWithFormat:(id)arg1 ;
+(id)IOErrorWithFormat:(id)arg1 ;
+(id)parameterErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)customLayerErrorWithUnderlyingError:(id)arg1 withFormat:(id)arg2 ;
+(id)modelEncryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)modelDecryptionKeyFetchErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
+(id)modelDecryptionErrorWithUnderlyingError:(id)arg1 format:(id)arg2 ;
@end

