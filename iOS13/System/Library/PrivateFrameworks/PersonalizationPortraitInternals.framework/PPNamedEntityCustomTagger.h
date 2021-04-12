/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class _PASLock, NSDictionary;

@interface PPNamedEntityCustomTagger : NSObject {

	_PASLock* _lock;
	NSDictionary* _categoryMapping;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)enumerateNamedEntitiesInText:(id)arg1 range:(NSRange)arg2 addNamedEntity:(/*^block*/id)arg3 ;
-(void)enumerateNamedEntitiesInText:(id)arg1 addNamedEntity:(/*^block*/id)arg2 ;
@end

