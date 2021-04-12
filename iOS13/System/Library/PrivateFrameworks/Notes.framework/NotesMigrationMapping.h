/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2 ;
+(id)modelForModelName:(id)arg1 ;
+(id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)descriptionString;
-(void)setDescriptionString:(NSString *)arg1 ;
-(NSManagedObjectModel *)destinationModel;
-(BOOL)canMigrateStoreMetadata:(id)arg1 ;
-(id)sourceModelForStoreMetadata:(id)arg1 ;
-(id)mappingModelForStoreMetadata:(id)arg1 ;
-(void)setSourceModels:(NSArray *)arg1 ;
-(void)setDestinationModel:(NSManagedObjectModel *)arg1 ;
-(NSArray *)sourceModels;
@end

