/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSData, NSDate;

@interface CKPublicKey : NSObject {

	NSData* _publicKey;
	long long _version;
	NSDate* _expiration;
	NSData* _certData;

}

@property (nonatomic,readonly) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;              //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,readonly) NSData * certData;                //@synthesize certData=_certData - In the implementation block
-(long long)version;
-(NSData *)publicKey;
-(NSDate *)expiration;
-(id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4 ;
-(BOOL)hasExpired;
-(NSData *)certData;
@end

