/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <StoreBookkeeper/SBKResponse.h>

@class NSString, NSData;

@interface SBKPushValueResponse : SBKResponse {

	NSString* _domainVersion;
	NSData* _conflictItemValuePayload;
	NSString* _conflictItemKey;
	NSString* _conflictItemVersionAnchor;

}

@property (readonly) NSString * domainVersion;                          //@synthesize domainVersion=_domainVersion - In the implementation block
@property (readonly) NSData * conflictItemValuePayload;                 //@synthesize conflictItemValuePayload=_conflictItemValuePayload - In the implementation block
@property (readonly) NSString * conflictItemKey;                        //@synthesize conflictItemKey=_conflictItemKey - In the implementation block
@property (readonly) NSString * conflictItemVersionAnchor;              //@synthesize conflictItemVersionAnchor=_conflictItemVersionAnchor - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(NSString *)domainVersion;
-(NSData *)conflictItemValuePayload;
-(NSString *)conflictItemKey;
-(NSString *)conflictItemVersionAnchor;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
@end

