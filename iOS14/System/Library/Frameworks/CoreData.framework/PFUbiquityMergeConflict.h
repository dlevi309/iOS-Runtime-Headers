/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSMergeConflict.h>

@class NSDictionary;

@interface PFUbiquityMergeConflict : NSMergeConflict {

	NSDictionary* _ancestorSnapshot;

}

@property (retain) NSDictionary * ancestorSnapshot;              //@synthesize ancestorSnapshot=_ancestorSnapshot - In the implementation block
-(void)setAncestorSnapshot:(NSDictionary *)arg1 ;
-(NSDictionary *)ancestorSnapshot;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(void)dealloc;
@end

