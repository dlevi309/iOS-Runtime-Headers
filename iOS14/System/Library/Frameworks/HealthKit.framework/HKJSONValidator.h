/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol NSCopying;
@class NSMutableDictionary;

@interface HKJSONValidator : NSObject {

	NSMutableDictionary* _subschemaCache;
	id<NSCopying> _schema;

}

@property (nonatomic,copy,readonly) id<NSCopying> schema;              //@synthesize schema=_schema - In the implementation block
+(id)searchPaths;
+(void)registerSearchPath:(id)arg1 ;
+(BOOL)validateJSONObject:(id)arg1 withSchemaNamed:(id)arg2 bundle:(id)arg3 error:(out id*)arg4 ;
-(id<NSCopying>)schema;
-(id)init;
-(BOOL)_validateBoolean:(id)arg1 ;
-(id)initWithSchema:(id)arg1 ;
-(id)_mismatchErrorFromKeyStack:(id)arg1 ;
-(id)initWithSchemaNamed:(id)arg1 bundle:(id)arg2 ;
-(BOOL)validateJSONObject:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_validateJSONObject:(id)arg1 keyStack:(id)arg2 ;
-(BOOL)_validateValue:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 root:(BOOL)arg4 ;
-(BOOL)_validateDictionary:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validateArray:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validatePrimitive:(id)arg1 schema:(id)arg2 keyStack:(id)arg3 ;
-(BOOL)_validateFingerprintSHA256:(id)arg1 ;
-(BOOL)_validateTimezone:(id)arg1 ;
-(BOOL)_validateURL:(id)arg1 ;
-(BOOL)_validateValue:(id)arg1 subschemaNamed:(id)arg2 keyStack:(id)arg3 ;
-(id)_loadSubschemaNamed:(id)arg1 ;
-(id)initWithSchema:(id)arg1 subschemaCache:(id)arg2 ;
@end

