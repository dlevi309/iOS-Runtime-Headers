/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollection.h>
#import <libobjc.A.dylib/FPSpotlightDataSourceDelegate.h>

@class FPQueryEnumerationSettings, NSPredicate, NSString, NSNumber, NSArray;

@interface FPQueryCollection : FPItemCollection <FPSpotlightDataSourceDelegate> {

	FPQueryEnumerationSettings* _settings;
	Class _descriptorClass;
	NSPredicate* _predicate;
	unsigned long long _itemsOrigin;
	NSString* _descriptionName;

}

@property (readonly) FPQueryEnumerationSettings * settings;                 //@synthesize settings=_settings - In the implementation block
@property (readonly) NSPredicate * predicate;                               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned long long itemsOrigin;              //@synthesize itemsOrigin=_itemsOrigin - In the implementation block
@property (copy) NSNumber * desiredNumberOfItems; 
@property (copy) NSArray * allowedProviderIdentifiers; 
@property (copy) NSArray * excludedFileTypes; 
@property (copy) NSArray * allowedFileTypes; 
@property (copy) NSString * tagIdentifier; 
@property (copy) NSString * descriptionName;                                //@synthesize descriptionName=_descriptionName - In the implementation block
+(void)enableMountPointQueries;
+(void)disableMountPointQueries;
+(void)suspendAllQueries;
+(void)resumeAllQueries;
-(NSPredicate *)predicate;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 paced:(BOOL)arg3 ;
-(id)_enumerationSettingsPredicate;
-(id)_createDescriptorWithSortDescriptors:(id)arg1 ;
-(unsigned long long)itemsOrigin;
-(void)setDesiredNumberOfItems:(NSNumber *)arg1 ;
-(NSNumber *)desiredNumberOfItems;
-(void)setAllowedFileTypes:(NSArray *)arg1 ;
-(NSArray *)allowedFileTypes;
-(void)setExcludedFileTypes:(NSArray *)arg1 ;
-(NSArray *)excludedFileTypes;
-(void)dataSource:(id)arg1 didChangeItemsOrigin:(unsigned long long)arg2 ;
-(id)initWithQueryDescriptorClass:(Class)arg1 ;
-(void)setAllowedProviderIdentifiers:(NSArray *)arg1 ;
-(id)initWithQueryDescriptorClass:(Class)arg1 predicate:(id)arg2 ;
-(NSArray *)allowedProviderIdentifiers;
-(id)underlyingQueryStringForMountPoint:(id)arg1 ;
-(NSString *)descriptionName;
-(void)setDescriptionName:(NSString *)arg1 ;
-(id)description;
-(FPQueryEnumerationSettings *)settings;
-(NSString *)tagIdentifier;
-(void)setTagIdentifier:(NSString *)arg1 ;
@end

