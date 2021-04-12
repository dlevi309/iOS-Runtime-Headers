/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)clientName;
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)finalizeSession;
-(void)setClientName:(NSString *)arg1 ;
-(BOOL)hasCompleteSessionSetup;
-(BOOL)hasInitializedSession;
-(NSDictionary *)additionalUserInfo;
-(int)clientType;
-(long long)clientVersion;
-(id)hierarchyToken;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(void)setClientType:(int)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(void)initializeSession;
-(void)completeSessionSetup;
-(void)recordEvent:(id)arg1 ;
@end

