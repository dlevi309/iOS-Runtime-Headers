/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSString, MSPLongLivedCKOpCache;

@interface MSPLongLivedCKOpScopedCache : NSObject {

	NSString* _typeName;
	MSPLongLivedCKOpCache* _cache;

}

@property (nonatomic,retain) MSPLongLivedCKOpCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
-(void)addOperation:(id)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)setCache:(MSPLongLivedCKOpCache *)arg1 ;
-(MSPLongLivedCKOpCache *)cache;
-(NSString *)typeName;
-(void)pruneOperationsToIDs:(id)arg1 ;
-(BOOL)isAwareOfOperationID:(id)arg1 ;
-(BOOL)isCurrentOperationID:(id)arg1 ;
-(id)initWithType:(id)arg1 cache:(id)arg2 ;
-(void)removeOperation:(id)arg1 ;
-(BOOL)hasOperationID:(id)arg1 ;
@end

