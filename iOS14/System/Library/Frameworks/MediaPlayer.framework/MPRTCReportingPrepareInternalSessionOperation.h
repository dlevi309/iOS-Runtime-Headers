/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation {

	int _clientType;
	NSDictionary* _additionalUserInfo;
	NSString* _clientName;
	long long _clientVersion;
	id _hierarchyToken;
	NSString* _serviceIdentifier;
	long long _sessionID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * additionalUserInfo;              //@synthesize additionalUserInfo=_additionalUserInfo - In the implementation block
@property (nonatomic,copy) NSString * clientName;                          //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic) int clientType;                               //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) long long clientVersion;                      //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) id hierarchyToken;                            //@synthesize hierarchyToken=_hierarchyToken - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                   //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) long long sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id responseHandler;                             //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)isRTCReportingSupported;
+(id)RTCReportingFrameworkPath;
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
-(void)execute;
-(void)setClientName:(NSString *)arg1 ;
-(long long)sessionID;
-(void)setSessionID:(long long)arg1 ;
-(NSString *)clientName;
-(long long)clientVersion;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(id)responseHandler;
-(NSString *)serviceIdentifier;
-(id)hierarchyToken;
-(NSDictionary *)additionalUserInfo;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(void)setClientVersion:(long long)arg1 ;
@end

