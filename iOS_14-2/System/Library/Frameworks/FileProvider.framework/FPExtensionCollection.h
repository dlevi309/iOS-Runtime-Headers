/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollection.h>

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {

	FPExtensionEnumerationSettings* _settings;
	FPItemID* _alternateID;

}

@property (copy) FPExtensionEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2 ;
+(BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(id)enumeratedItemID;
-(BOOL)isRootItem:(id)arg1 ;
-(void)updateRootItem:(id)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(void)setSettings:(FPExtensionEnumerationSettings *)arg1 ;
-(id)description;
-(FPExtensionEnumerationSettings *)settings;
@end

