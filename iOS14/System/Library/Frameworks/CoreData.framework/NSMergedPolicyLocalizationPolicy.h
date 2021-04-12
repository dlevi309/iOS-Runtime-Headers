/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {

	NSSet* _mergedPolicies;

}
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)init;
-(void)addPolicy:(id)arg1 ;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

