/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSArray, NSString;

@interface ICPushNotificationMessage : NSObject {

	NSDictionary* _userInfo;
	long long _accountDSID;
	long long _actionType;
	NSDictionary* _apsPayload;

}

@property (nonatomic,readonly) long long sagaServerRevision; 
@property (nonatomic,copy,readonly) NSArray * sagaUpdatedSubscribedPlaylistIDs; 
@property (nonatomic,readonly) long long jaliscoServerRevision; 
@property (nonatomic,copy,readonly) NSArray * jaliscoChangedMediaTypes; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) long long moduleIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) long long accountDSID;                                        //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long actionType;                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * apsPayload;                               //@synthesize apsPayload=_apsPayload - In the implementation block
-(long long)actionType;
-(NSDictionary *)userInfo;
-(NSDictionary *)apsPayload;
-(id)initWithMessageUserInfo:(id)arg1 ;
-(long long)sagaServerRevision;
-(NSArray *)sagaUpdatedSubscribedPlaylistIDs;
-(long long)jaliscoServerRevision;
-(NSArray *)jaliscoChangedMediaTypes;
-(long long)moduleIdentifier;
-(NSString *)clientIdentifier;
-(long long)accountDSID;
@end

