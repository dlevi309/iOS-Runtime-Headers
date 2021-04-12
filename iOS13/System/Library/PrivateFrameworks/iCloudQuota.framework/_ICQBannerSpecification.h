/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface _ICQBannerSpecification : NSObject {

	NSDictionary* _serverDict;
	NSString* _messageFormat;
	NSArray* _messageLinks;
	NSURL* _remoteUIURL;

}

@property (nonatomic,retain) NSDictionary * serverDict; 
@property (nonatomic,retain) NSString * messageFormat;               //@synthesize messageFormat=_messageFormat - In the implementation block
@property (nonatomic,retain) NSArray * messageLinks;                 //@synthesize messageLinks=_messageLinks - In the implementation block
@property (nonatomic,retain) NSURL * remoteUIURL;                    //@synthesize remoteUIURL=_remoteUIURL - In the implementation block
+(id)bannerSpecificationSampleForLevel:(long long)arg1 ;
-(NSArray *)messageLinks;
-(void)setMessageLinks:(NSArray *)arg1 ;
-(NSString *)messageFormat;
-(void)setServerDict:(NSDictionary *)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(NSURL *)remoteUIURL;
-(void)setRemoteUIURL:(NSURL *)arg1 ;
-(void)setMessageFormat:(NSString *)arg1 ;
-(void)setMessageWithServerMessage:(id)arg1 ;
@end

