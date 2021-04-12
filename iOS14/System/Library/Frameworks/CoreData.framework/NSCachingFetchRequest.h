/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	id _cachedInfo;
	id _identifier;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) NSDictionary * substitutionVariables; 
+(id)_generateIdentifier;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)substitutionVariables;
-(id)_copyForDirtyContext;
-(BOOL)_isCachingFetchRequest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

