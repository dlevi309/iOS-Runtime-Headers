/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	id _cachedInfo;
	id _identifier;
	int _lock;

}

@property (nonatomic,readonly) id _identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutionVariables; 
+(id)_generateIdentifier;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_identifier;
-(NSDictionary *)substitutionVariables;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(id)_copyForDirtyContext;
-(void)_disableSQLStatementCaching;
-(id)_cachedInfoForRequestor:(id)arg1 ;
-(void)_cacheInfo:(id)arg1 forRequestor:(id)arg2 ;
-(void)_sanityCheckVariables:(id)arg1 ;
@end

