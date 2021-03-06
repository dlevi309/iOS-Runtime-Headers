/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
*/


@class NSDictionary, NSString, NSArray, NSURL;

@interface _ICQBannerSpecification : NSObject {

	NSDictionary* _serverDict;
	BOOL _isDetailBannerInfoAvailable;
	BOOL _placeholderExists;
	NSDictionary* _messageTemplates;
	NSDictionary* _titleTemplates;
	NSString* _linksFormat;
	NSArray* _links;
	NSURL* _remoteUIURL;

}

@property (nonatomic,readonly) NSDictionary * messageTemplates;               //@synthesize messageTemplates=_messageTemplates - In the implementation block
@property (nonatomic,readonly) NSDictionary * titleTemplates;                 //@synthesize titleTemplates=_titleTemplates - In the implementation block
@property (nonatomic,retain) NSString * linksFormat;                          //@synthesize linksFormat=_linksFormat - In the implementation block
@property (nonatomic,retain) NSArray * links;                                 //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) BOOL isDetailBannerInfoAvailable;              //@synthesize isDetailBannerInfoAvailable=_isDetailBannerInfoAvailable - In the implementation block
@property (nonatomic,readonly) BOOL placeholderExists;                        //@synthesize placeholderExists=_placeholderExists - In the implementation block
@property (nonatomic,retain) NSURL * remoteUIURL;                             //@synthesize remoteUIURL=_remoteUIURL - In the implementation block
+(id)bannerSpecificationSampleForLevel:(long long)arg1 ;
-(NSArray *)links;
-(void)setLinks:(NSArray *)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSURL *)remoteUIURL;
-(void)setRemoteUIURL:(NSURL *)arg1 ;
-(NSDictionary *)titleTemplates;
-(id)titleWithKey:(id)arg1 ;
-(void)setLinksFormat:(NSString *)arg1 ;
-(void)setMessageWithServerMessage:(id)arg1 ;
-(BOOL)isDetailBannerInfoAvailable;
-(NSDictionary *)messageTemplates;
-(id)initWithDetailBannerInfo:(id)arg1 ;
-(id)messageWithKey:(id)arg1 ;
-(NSString *)linksFormat;
-(BOOL)placeholderExists;
@end

