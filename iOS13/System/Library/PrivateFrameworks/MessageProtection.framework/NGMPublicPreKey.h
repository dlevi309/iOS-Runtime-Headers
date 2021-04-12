/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class DHPublicKey, NSData;

@interface NGMPublicPreKey : NSObject {

	DHPublicKey* _dhKey;
	NSData* _signature;
	double _timestamp;

}

@property (nonatomic,readonly) DHPublicKey * dhKey;              //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NSData * signature;               //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
-(id)description;
-(double)timestamp;
-(NSData *)signature;
-(DHPublicKey *)dhKey;
-(id)initWithPublicKey:(id)arg1 signature:(id)arg2 timestamp:(double)arg3 ;
-(id)initRemotePrekeyWithPublicPrekey:(id)arg1 signedBy:(id)arg2 error:(id*)arg3 ;
-(BOOL)isValidlySignedBy:(id)arg1 error:(id*)arg2 ;
@end

