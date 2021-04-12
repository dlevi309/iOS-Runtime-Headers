/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPullValueResponse : SBKResponse {

	NSString* _itemKey;
	NSString* _itemVersion;
	NSData* _itemValuePayload;
	NSString* _domainVersion;

}

@property (readonly) NSString * itemKey;                     //@synthesize itemKey=_itemKey - In the implementation block
@property (readonly) NSString * itemVersion;                 //@synthesize itemVersion=_itemVersion - In the implementation block
@property (readonly) NSData * itemValuePayload;              //@synthesize itemValuePayload=_itemValuePayload - In the implementation block
@property (readonly) NSString * domainVersion;               //@synthesize domainVersion=_domainVersion - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSString *)itemVersion;
-(NSString *)domainVersion;
-(NSData *)itemValuePayload;
-(NSString *)itemKey;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

