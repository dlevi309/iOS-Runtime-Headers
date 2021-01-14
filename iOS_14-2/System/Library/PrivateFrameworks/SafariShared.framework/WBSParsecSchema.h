/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSError;

@interface WBSParsecSchema : NSObject {

	BOOL _optional;
	/*^block*/id _validationBlock;
	/*^block*/id _specializedSchemaBlock;
	Class _expectedClass;
	NSError* _associatedError;

}

@property (nonatomic,copy) id validationBlock;                             //@synthesize validationBlock=_validationBlock - In the implementation block
@property (nonatomic,copy) id specializedSchemaBlock;                      //@synthesize specializedSchemaBlock=_specializedSchemaBlock - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;              //@synthesize optional=_optional - In the implementation block
@property (nonatomic,retain) Class expectedClass;                          //@synthesize expectedClass=_expectedClass - In the implementation block
@property (nonatomic,retain) NSError * associatedError;                    //@synthesize associatedError=_associatedError - In the implementation block
+(id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 ;
+(id)schemaForArrayWithElementSchema:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
+(id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
+(id)schemaWithConstantValue:(id)arg1 ;
+(id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 ;
+(id)schemaWithExpectedClass:(Class)arg1 ;
+(id)schemaForDictionaryWithStructure:(id)arg1 ;
+(id)schemaForArrayWithElementSchema:(id)arg1 ;
+(id)schemaForDictionaryWithStructure:(id)arg1 associatedError:(id)arg2 ;
+(id)schemaWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)isOptional;
-(id)_initWithExpectedClass:(Class)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3 ;
-(BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(/*^block*/id)arg4 ;
-(id)specializedSchemaBlock;
-(Class)expectedClass;
-(void)setSpecializedSchemaBlock:(id)arg1 ;
-(void)setExpectedClass:(Class)arg1 ;
-(NSError *)associatedError;
-(void)setAssociatedError:(NSError *)arg1 ;
-(id)validationBlock;
-(void)setValidationBlock:(id)arg1 ;
-(void)validateObject:(id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
@end

