/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SSMemoryEntity : NSObject <NSCopying> {

	long long _databaseID;
	NSMutableDictionary* _propertyValues;
	NSMutableDictionary* _externalPropertyValues;

}

@property (assign,nonatomic) long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyValues;                      //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * externalPropertyValues;              //@synthesize externalPropertyValues=_externalPropertyValues - In the implementation block
+(Class)databaseEntityClass;
+(id)defaultProperties;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 predicate:(id)arg2 ;
+(id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)databaseID;
-(void)setDatabaseID:(long long)arg1 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(void)setValuesWithDictionary:(id)arg1 ;
-(void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(long long)arg3 ;
-(void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(long long)arg3 ;
-(NSDictionary *)propertyValues;
-(NSDictionary *)externalPropertyValues;
-(id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setExternalValuesWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ;
@end

