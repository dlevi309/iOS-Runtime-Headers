/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, NSString;

@interface PFCloudKitModelValidator : NSObject {

	NSManagedObjectModel* _model;
	NSString* _configurationName;
	BOOL _skipValueTransformerValidation;
	BOOL _validateLegacyMetadataAttributes;

}

@property (assign,nonatomic) BOOL skipValueTransformerValidation;                //@synthesize skipValueTransformerValidation=_skipValueTransformerValidation - In the implementation block
@property (assign,nonatomic) BOOL validateLegacyMetadataAttributes;              //@synthesize validateLegacyMetadataAttributes=_validateLegacyMetadataAttributes - In the implementation block
+(id)stringFromDeleteRule:(unsigned long long)arg1 ;
+(BOOL)enforceUniqueConstraintChecks;
-(BOOL)validate:(id*)arg1 ;
-(BOOL)skipValueTransformerValidation;
-(id)init;
-(BOOL)validateLegacyMetadataAttributes;
-(void)setSkipValueTransformerValidation:(BOOL)arg1 ;
-(BOOL)_validateManagedObjectModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntities:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateEntity:(id)arg1 hasAttributeNamed:(id)arg2 ofType:(unsigned long long)arg3 andReturnFailureReason:(id*)arg4 ;
-(id)initWithManagedObjectModel:(id)arg1 configuration:(id)arg2 ;
-(void)setValidateLegacyMetadataAttributes:(BOOL)arg1 ;
-(void)dealloc;
@end

