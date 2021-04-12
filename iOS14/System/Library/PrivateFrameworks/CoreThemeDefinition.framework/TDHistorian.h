/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@class CoreThemeDocument;

@interface TDHistorian : NSObject {

	CoreThemeDocument* document;

}
-(id)initWithDocument:(id)arg1 ;
-(void)updateEntriesForManagedObjects:(id)arg1 ;
-(void)_updateEntryForManagedObject:(id)arg1 ;
-(id)_updateRecordsWithName:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)foundDataChangesSinceDate:(id)arg1 ;
-(id)productionsWithModifiedAssets;
-(id)productionsChangedSinceDate:(id)arg1 uuidNeedsReset:(BOOL*)arg2 ;
-(id)colorsChangedSinceDate:(id)arg1 ;
-(id)fontsChangedSinceDate:(id)arg1 ;
-(id)fontSizesChangedSinceDate:(id)arg1 ;
-(id)namedElementsChangedSinceDate:(id)arg1 ;
-(id)facetDefinitionsChangedSinceDate:(id)arg1 ;
-(id)keySpecsForRenditionsRemovedSinceDate:(id)arg1 ;
@end

