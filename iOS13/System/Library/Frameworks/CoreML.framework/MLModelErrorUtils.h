/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLModelErrorUtils : NSObject
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 args:(char*)arg3 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 string:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 string:(id)arg2 ;
+(id)genericErrorWithString:(id)arg1 ;
+(id)updateErrorWithString:(id)arg1 ;
+(id)featureTypeErrorWithString:(id)arg1 ;
+(id)IOErrorWithString:(id)arg1 ;
+(id)customLayerErrorWithUnderlyingError:(id)arg1 withString:(id)arg2 ;
+(id)parameterErrorWithUnderlyingError:(id)arg1 string:(id)arg2 ;
@end

