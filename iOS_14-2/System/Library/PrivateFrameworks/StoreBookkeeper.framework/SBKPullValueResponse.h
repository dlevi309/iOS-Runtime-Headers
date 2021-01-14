/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)itemKey;
-(NSData *)itemValuePayload;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

