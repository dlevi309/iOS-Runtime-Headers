/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/

#import <libobjc.A.dylib/SBKKeyValuePayloadPair.h>

@class NSString, NSData;

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair> {

	NSString* _kvsKey;
	NSData* _kvsPayload;

}

@property (nonatomic,readonly) NSString * kvsKey;                   //@synthesize kvsKey=_kvsKey - In the implementation block
@property (nonatomic,readonly) NSData * kvsPayload;                 //@synthesize kvsPayload=_kvsPayload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
-(NSString *)kvsKey;
-(NSData *)kvsPayload;
-(id)kvsValueDescription;
@end

