/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)publicKey;
-(NSData *)certData;
-(BOOL)hasExpired;
-(id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4 ;
-(NSDate *)expiration;
-(long long)version;
@end

