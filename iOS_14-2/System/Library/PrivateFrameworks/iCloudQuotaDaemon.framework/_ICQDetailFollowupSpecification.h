/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/

#import <iCloudQuotaDaemon/_ICQFollowupSpecification.h>

@class NSDictionary, NSString;

@interface _ICQDetailFollowupSpecification : _ICQFollowupSpecification {

	NSDictionary* _lockScreenInfo;
	NSDictionary* _followUpInfo;
	NSDictionary* _mesgTemplates;
	NSDictionary* _titleTemplates;
	NSDictionary* _followupMesgTemplates;
	NSDictionary* _followupTitleTemplates;
	NSString* _bundleId;

}

@property (nonatomic,retain) NSDictionary * lockScreenInfo;                      //@synthesize lockScreenInfo=_lockScreenInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * followUpInfo;                        //@synthesize followUpInfo=_followUpInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * mesgTemplates;                       //@synthesize mesgTemplates=_mesgTemplates - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTemplates;                      //@synthesize titleTemplates=_titleTemplates - In the implementation block
@property (nonatomic,retain) NSDictionary * followupMesgTemplates;               //@synthesize followupMesgTemplates=_followupMesgTemplates - In the implementation block
@property (nonatomic,retain) NSDictionary * followupTitleTemplates;              //@synthesize followupTitleTemplates=_followupTitleTemplates - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
+(id)replaceWordsIn:(id)arg1 with:(id)arg2 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(id)initWithServerDictionary:(id)arg1 ;
-(void)postFollowupWithController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLockScreenInfo:(NSDictionary *)arg1 ;
-(void)setFollowUpInfo:(NSDictionary *)arg1 ;
-(void)setTitleTemplates:(NSDictionary *)arg1 ;
-(void)setMesgTemplates:(NSDictionary *)arg1 ;
-(void)setFollowupTitleTemplates:(NSDictionary *)arg1 ;
-(void)setFollowupMesgTemplates:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTemplates;
-(NSDictionary *)mesgTemplates;
-(id)titleWithKey:(id)arg1 ;
-(id)mesgWithKey:(id)arg1 ;
-(NSDictionary *)followupTitleTemplates;
-(NSDictionary *)followupMesgTemplates;
-(NSDictionary *)lockScreenInfo;
-(NSDictionary *)followUpInfo;
@end

