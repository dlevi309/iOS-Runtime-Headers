/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BLDAAPURLRequest.h>

@class NSNumber;

@interface BLDAAPItemsRequest : BLDAAPURLRequest {

	NSNumber* _bagDatabaseID;

}

@property (nonatomic,retain) NSNumber * bagDatabaseID;              //@synthesize bagDatabaseID=_bagDatabaseID - In the implementation block
-(void)setBagDatabaseID:(NSNumber *)arg1 ;
-(NSNumber *)bagDatabaseID;
-(id)initWithDSID:(id)arg1 reason:(long long)arg2 databaseID:(id)arg3 body:(id)arg4 ;
-(id)createDaapURL:(id)arg1 ;
@end

