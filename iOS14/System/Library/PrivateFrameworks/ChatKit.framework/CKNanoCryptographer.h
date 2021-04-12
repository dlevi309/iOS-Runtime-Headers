/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prewarmDeviceSalt;
-(NSString *)cachedRecipientName;
-(void)setCachedRecipientDigest:(NSString *)arg1 ;
-(id)stringDigestForName:(id)arg1 ;
-(void)setCachedRecipientName:(NSString *)arg1 ;
-(NSData *)deviceSalt;
-(NSString *)cachedRecipientDigest;
@end

