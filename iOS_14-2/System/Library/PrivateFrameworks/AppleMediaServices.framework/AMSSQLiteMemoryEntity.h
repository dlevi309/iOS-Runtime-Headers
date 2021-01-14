/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSSQLiteMemoryEntity : NSObject <NSCopying> {

	long long _databaseID;
	NSMutableDictionary* _propertyValues;
	NSMutableDictionary* _externalPropertyValues;

}

@property (assign,nonatomic) long long databaseID;                                      //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyValues;                      //@synthesize propertyValues=_propertyValues - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * externalPropertyValues;              //@synthesize externalPropertyValues=_externalPropertyValues - In the implementation block
+(id)defaultProperties;
+(Class)databaseEntityClass;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 ;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)anyOnConnection:(id)arg1 predicate:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)description;
-(void)setValuesWithDictionary:(id)arg1 ;
-(NSDictionary *)propertyValues;
-(void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setValues:(id*)arg1 forProperties:(const id*)arg2 count:(long long)arg3 ;
-(void)setValues:(id*)arg1 forExternalProperties:(const id*)arg2 count:(long long)arg3 ;
-(NSDictionary *)externalPropertyValues;
-(id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2 ;
-(void)setExternalValuesWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ;
-(id)valueForExternalProperty:(id)arg1 ;
-(unsigned long long)hash;
-(id)valueForProperty:(id)arg1 ;
-(void)setDatabaseID:(long long)arg1 ;
-(long long)databaseID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

