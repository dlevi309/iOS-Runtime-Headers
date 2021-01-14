/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSDictionary, FCEmailSignupConfig;

@interface FCChannelUpsellConfig : NSObject {

	NSString* _channelID;
	NSDictionary* _triggersByMethod;
	long long _quiescenceInterval;
	FCEmailSignupConfig* _emailSignupConfiguration;

}

@property (nonatomic,copy) NSString * channelID;                                          //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,retain) NSDictionary * triggersByMethod;                             //@synthesize triggersByMethod=_triggersByMethod - In the implementation block
@property (assign,nonatomic) long long quiescenceInterval;                                //@synthesize quiescenceInterval=_quiescenceInterval - In the implementation block
@property (nonatomic,retain) FCEmailSignupConfig * emailSignupConfiguration;              //@synthesize emailSignupConfiguration=_emailSignupConfiguration - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
-(NSString *)channelID;
-(NSDictionary *)triggersByMethod;
-(void)setTriggersByMethod:(NSDictionary *)arg1 ;
-(long long)quiescenceInterval;
-(void)setQuiescenceInterval:(long long)arg1 ;
-(FCEmailSignupConfig *)emailSignupConfiguration;
-(void)setEmailSignupConfiguration:(FCEmailSignupConfig *)arg1 ;
@end

