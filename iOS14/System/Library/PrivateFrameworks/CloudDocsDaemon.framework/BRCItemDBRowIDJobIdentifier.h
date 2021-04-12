/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobIdentifying.h>

@class NSString;

@interface BRCItemDBRowIDJobIdentifier : NSObject <BRCJobIdentifying> {

	long long _itemDBRowID;

}

@property (nonatomic,readonly) long long itemDBRowID;               //@synthesize itemDBRowID=_itemDBRowID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)columns;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(long long)itemDBRowID;
-(id)initWithItemDBRowID:(long long)arg1 ;
-(BOOL)isEqualToItemDBRowIDIdentifier:(id)arg1 ;
@end

