/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@class NSManagedObjectModel, NSArray, NSString;

@interface NotesMigrationMapping : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSArray* _sourceModels;
	NSString* _descriptionString;
	long long _type;

}

@property (copy) NSArray * sourceModels;                                 //@synthesize sourceModels=_sourceModels - In the implementation block
@property (copy) NSString * descriptionString;                           //@synthesize descriptionString=_descriptionString - In the implementation block
@property (retain) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (assign) long long type;                                       //@synthesize type=_type - In the implementation block
+(id)mappings;
+(id)modelForModelName:(id)arg1 ;
+(id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(void)setDescriptionString:(NSString *)arg1 ;
-(id)description;
-(NSString *)descriptionString;
-(long long)type;
-(NSManagedObjectModel *)destinationModel;
-(NSArray *)sourceModels;
-(BOOL)canMigrateStoreMetadata:(id)arg1 ;
-(id)sourceModelForStoreMetadata:(id)arg1 ;
-(id)mappingModelForStoreMetadata:(id)arg1 ;
-(void)setSourceModels:(NSArray *)arg1 ;
-(void)setDestinationModel:(NSManagedObjectModel *)arg1 ;
@end

