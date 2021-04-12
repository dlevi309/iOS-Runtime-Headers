/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol OS_dispatch_queue;
@class NSData, NSObject, NSString;

@interface CKNanoCryptographer : NSObject {

	NSData* _deviceSalt;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _cachedRecipientName;
	NSString* _cachedRecipientDigest;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSData * deviceSalt; 
@property (nonatomic,copy) NSString * cachedRecipientName;                              //@synthesize cachedRecipientName=_cachedRecipientName - In the implementation block
@property (nonatomic,copy) NSString * cachedRecipientDigest;                            //@synthesize cachedRecipientDigest=_cachedRecipientDigest - In the implementation block
+(id)sharedCryptographer;
-(id)init;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)cachedRecipientName;
-(NSString *)cachedRecipientDigest;
-(NSData *)deviceSalt;
-(void)setCachedRecipientName:(NSString *)arg1 ;
-(void)setCachedRecipientDigest:(NSString *)arg1 ;
-(id)stringDigestForName:(id)arg1 ;
@end

