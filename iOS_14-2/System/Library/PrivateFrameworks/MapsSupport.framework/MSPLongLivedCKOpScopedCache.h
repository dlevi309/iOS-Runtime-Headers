/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@class NSString, MSPLongLivedCKOpCache;

@interface MSPLongLivedCKOpScopedCache : NSObject {

	NSString* _typeName;
	MSPLongLivedCKOpCache* _cache;

}

@property (nonatomic,retain) MSPLongLivedCKOpCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
-(id)initWithType:(id)arg1 ;
-(MSPLongLivedCKOpCache *)cache;
-(void)addOperation:(id)arg1 ;
-(void)setCache:(MSPLongLivedCKOpCache *)arg1 ;
-(NSString *)typeName;
-(void)removeOperation:(id)arg1 ;
-(void)pruneOperationsToIDs:(id)arg1 ;
-(BOOL)isAwareOfOperationID:(id)arg1 ;
-(BOOL)isCurrentOperationID:(id)arg1 ;
-(id)initWithType:(id)arg1 cache:(id)arg2 ;
-(BOOL)hasOperationID:(id)arg1 ;
@end

