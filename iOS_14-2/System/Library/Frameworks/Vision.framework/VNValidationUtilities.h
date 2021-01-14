/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@interface VNValidationUtilities : NSObject
+(BOOL)validateClassArray:(id)arg1 named:(id)arg2 hasElementsAncestoredFromClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getOptionalRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)validateRequiredClusterIDs:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateVNConfidenceRange:(float)arg1 error:(id*)arg2 ;
+(BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalRequestRevision:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getOptionalRequestRevision:(unsigned long long*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getBOOLValue:(BOOL*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(BOOL)arg4 error:(id*)arg5 ;
+(BOOL)validateRequiredFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateRequiredFaceObservations:(id)arg1 error:(id*)arg2 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(BOOL)getOptionalRequestRevision:(unsigned long long*)arg1 fromSupportedRevisionsForRequestClass:(Class)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(id)requiredArrayForKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(id*)arg4 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5 ;
+(BOOL)validateArray:(id)arg1 named:(id)arg2 hasElementsOfClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)getArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 requiredMinimumCount:(unsigned long long)arg5 allowedMaximumCount:(unsigned long long)arg6 error:(id*)arg7 ;
+(BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(id)requiredSessionInOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateFaceObservations:(id)arg1 withMinimumCount:(unsigned long long)arg2 forOptionalRequest:(id)arg3 error:(id*)arg4 ;
+(BOOL)getNSUIntegerValue:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(unsigned long long)arg4 error:(id*)arg5 ;
+(BOOL)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
+(BOOL)validateOptionalFaceObservations:(id)arg1 error:(id*)arg2 ;
+(BOOL)getBOOLValue:(BOOL*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getNSIntegerValue:(long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(long long)arg4 error:(id*)arg5 ;
+(id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)validateOptionalFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id*)arg3 ;
+(BOOL)getNSUIntegerValue:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(id)requiredFaceObservationInOptions:(id)arg1 withOptionName:(id)arg2 error:(id*)arg3 ;
+(id)requiredInputFacesArrayInOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)getRequiredRequestRevision:(unsigned long long*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
@end

