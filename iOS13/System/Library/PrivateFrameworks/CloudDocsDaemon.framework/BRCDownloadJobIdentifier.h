/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)kind;
-(NSString *)etag;
-(id)columns;
-(id)matchingJobsWhereSQLClause;
-(id)columnsValues;
-(id)jobsDescription;
-(BOOL)isEqualToDownloadJobIdentifier:(id)arg1 ;
-(id)initWithDBRowID:(unsigned long long)arg1 etag:(id)arg2 kind:(int)arg3 ;
-(unsigned long long)itemDBRowID;
@end

