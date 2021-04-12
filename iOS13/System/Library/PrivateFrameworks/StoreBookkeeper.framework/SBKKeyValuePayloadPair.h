/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@protocol SBKKeyValuePayloadPair <NSObject,NSSecureCoding>
@required
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
-(double)timestamp;
-(id)kvsKey;
-(id)kvsPayload;
-(id)kvsValueDescription;

@end

