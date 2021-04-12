/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSNumber, NSArray, NSString;

@interface ICPushNotificationMessage : NSObject {

	NSDictionary* _userInfo;
	NSNumber* _accountDSID;
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
@property (nonatomic,copy,readonly) NSNumber * accountDSID;                                  //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long actionType;                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * apsPayload;                               //@synthesize apsPayload=_apsPayload - In the implementation block
-(NSDictionary *)userInfo;
-(NSString *)clientIdentifier;
-(long long)actionType;
-(NSNumber *)accountDSID;
-(long long)moduleIdentifier;
-(id)initWithMessageUserInfo:(id)arg1 ;
-(NSDictionary *)apsPayload;
-(long long)sagaServerRevision;
-(NSArray *)sagaUpdatedSubscribedPlaylistIDs;
-(long long)jaliscoServerRevision;
-(NSArray *)jaliscoChangedMediaTypes;
@end

