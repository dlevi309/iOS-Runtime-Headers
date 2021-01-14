/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSString, RTCReporting, NSOperationQueue, NSMutableArray;

@interface MPRTCReportingSession : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _additionalUserInfo;
	NSString* _clientName;
	int _clientType;
	long long _clientVersion;
	BOOL _hasCompleteSessionSetup;
	BOOL _hasInitializedSession;
	id _hierarchyToken;
	RTCReporting* _internalSession;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _pendingReportingEvents;
	NSString* _serviceIdentifier;
	unsigned _sessionID;
	NSDictionary* _sessionUserInfo;

}

@property (nonatomic,copy) NSDictionary * additionalUserInfo; 
@property (nonatomic,copy) NSString * clientName; 
@property (assign,nonatomic) int clientType; 
@property (assign,nonatomic) long long clientVersion; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,retain) id hierarchyToken; 
@property (assign,nonatomic) unsigned sessionID; 
@property (nonatomic,readonly) BOOL hasCompleteSessionSetup; 
@property (nonatomic,readonly) BOOL hasInitializedSession; 
+(void)_recordEvent:(id)arg1 withInternalSession:(id)arg2 ;
+(BOOL)_isRTCReportingSupported;
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
-(void)setClientName:(NSString *)arg1 ;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(id)init;
-(NSString *)clientName;
-(long long)clientVersion;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(void)recordEvent:(id)arg1 ;
-(id)hierarchyToken;
-(BOOL)hasCompleteSessionSetup;
-(BOOL)hasInitializedSession;
-(NSDictionary *)additionalUserInfo;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(void)initializeSession;
-(void)completeSessionSetup;
-(void)finalizeSession;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(void)setClientVersion:(long long)arg1 ;
@end

