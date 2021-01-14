/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCJobIdentifying.h>

@class NSString;

@interface BRCDownloadJobIdentifier : NSObject <BRCJobIdentifying> {

	int _kind;
	unsigned long long _itemDBRowID;
	NSString* _etag;

}

@property (nonatomic,readonly) unsigned long long itemDBRowID;              //@synthesize itemDBRowID=_itemDBRowID - In the implementation block
@property (nonatomic,readonly) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) int kind;                                    //@synthesize kind=_kind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)columns;
-(NSString *)etag;
-(int)kind;
-(NSString *)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(BOOL)isEqualToDownloadJobIdentifier:(id)arg1 ;
-(id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3 ;
-(unsigned long long)itemDBRowID;
@end

