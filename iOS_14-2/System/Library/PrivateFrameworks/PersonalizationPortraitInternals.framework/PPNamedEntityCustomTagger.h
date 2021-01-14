/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSDictionary, NSSet;

@interface PPNamedEntityCustomTagger : NSObject {

	_PASLock* _lock;
	NSDictionary* _categoryMapping;
	NSSet* _dynamicCategories;

}
+(id)sharedInstance;
-(id)init;
-(void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(/*^block*/id)arg2 ;
-(void)enumerateNamedEntitiesInText:(id)arg1 range:(NSRange)arg2 addNamedEntity:(/*^block*/id)arg3 ;
-(id)initWithFilePath:(id)arg1 dynamicCategories:(id)arg2 trialWrapper:(id)arg3 ;
-(void*)_loadTaggerWithDynamicCategories:(id)arg1 filePath:(id)arg2 trialWrapper:(id)arg3 ;
-(void)dealloc;
@end

