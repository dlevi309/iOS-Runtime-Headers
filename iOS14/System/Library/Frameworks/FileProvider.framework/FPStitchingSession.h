/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface FPStitchingSession : NSObject {

	NSMutableDictionary* _stitchedFields;
	NSMutableDictionary* _originalItems;
	NSMutableDictionary* _stitchedItems;
	NSMutableDictionary* _stitchedPlaceholders;
	NSMutableDictionary* _placeholderReplacements;
	NSMutableDictionary* _deletedItems;
	BOOL _started;
	BOOL _finished;
	/*^block*/id _placeholdersCreationBlock;

}

@property (nonatomic,copy) id placeholdersCreationBlock;                                    //@synthesize placeholdersCreationBlock=_placeholdersCreationBlock - In the implementation block
@property (nonatomic,readonly) NSArray * placeholderItems; 
@property (nonatomic,readonly) NSDictionary * stitchedFieldsAndItemsByItemIDs; 
@property (nonatomic,readonly) NSDictionary * stitchedItemsByParentID; 
@property (nonatomic,readonly) NSArray * placeholderReplacementsIDs; 
@property (nonatomic,readonly) NSArray * deletedIDs; 
@property (nonatomic,readonly) BOOL isActive; 
-(void)flush;
-(void)finish;
-(id)init;
-(void)start;
-(BOOL)isActive;
-(id)createArchivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3 ;
-(id)createGenericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2 ;
-(void)associateItem:(id)arg1 withPlaceholderID:(id)arg2 ;
-(void)finishWithItem:(id)arg1 error:(id)arg2 ;
-(id)createPlaceholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5 ;
-(id)createPlaceholderWithName:(id)arg1 isFolder:(BOOL)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5 ;
-(void)finishWithItems:(id)arg1 error:(id)arg2 ;
-(void)transformItems:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)replacePlaceholderWithID:(id)arg1 withItem:(id)arg2 ;
-(id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
-(NSDictionary *)stitchedFieldsAndItemsByItemIDs;
-(NSArray *)deletedIDs;
-(NSArray *)placeholderReplacementsIDs;
-(BOOL)cleanStitchedItemForItemID:(id)arg1 ;
-(NSDictionary *)stitchedItemsByParentID;
-(id)itemWithPlaceholderID:(id)arg1 ;
-(id)placeholdersCreationBlock;
-(void)setPlaceholdersCreationBlock:(id)arg1 ;
-(NSArray *)placeholderItems;
-(void)dealloc;
-(void)deleteItems:(id)arg1 ;
@end

