/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@class NSData, NSString;

@interface ASMessage : NSObject {

	int _type;
	NSData* _payload;
	long long _retryCount;
	NSString* _senderAddress;
	/*^block*/id _ephemeralCompletionBlock;

}

@property (nonatomic,retain) NSData * payload;                       //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long retryCount;                   //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * senderAddress;                 //@synthesize senderAddress=_senderAddress - In the implementation block
@property (nonatomic,copy) id ephemeralCompletionBlock;              //@synthesize ephemeralCompletionBlock=_ephemeralCompletionBlock - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(void)setSenderAddress:(NSString *)arg1 ;
-(NSString *)senderAddress;
-(long long)retryCount;
-(void)setType:(int)arg1 ;
-(NSData *)payload;
-(id)initWithDictionary:(id)arg1 ;
-(int)type;
-(id)ephemeralCompletionBlock;
-(void)setEphemeralCompletionBlock:(id)arg1 ;
@end

