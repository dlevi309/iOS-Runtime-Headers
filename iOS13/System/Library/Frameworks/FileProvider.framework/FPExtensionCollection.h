/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPItemCollection.h>

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection {

	FPExtensionEnumerationSettings* _settings;
	FPItemID* _alternateID;

}

@property (copy) FPExtensionEnumerationSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) FPItemID * enumeratedItemID; 
+(BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2 ;
+(BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2 ;
-(id)description;
-(id)initWithSettings:(id)arg1 ;
-(FPExtensionEnumerationSettings *)settings;
-(void)setSettings:(FPExtensionEnumerationSettings *)arg1 ;
-(FPItemID *)enumeratedItemID;
-(BOOL)isRootItem:(id)arg1 ;
-(void)updateRootItem:(id)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
@end

