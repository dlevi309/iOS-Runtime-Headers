/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface AVCSessionConfiguration : NSObject {

	unsigned long long _maxRemoteParticipants;
	long long _sessionMode;
	id _reportingHierarchyToken;

}

@property (assign,nonatomic) unsigned long long maxRemoteParticipants;              //@synthesize maxRemoteParticipants=_maxRemoteParticipants - In the implementation block
@property (assign,nonatomic) long long sessionMode;                                 //@synthesize sessionMode=_sessionMode - In the implementation block
@property (nonatomic,copy) id reportingHierarchyToken;                              //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
+(long long)clientSessionModeWithSessionMode:(long long)arg1 ;
+(long long)sessionModeWithClientSessionMode:(long long)arg1 ;
-(void)dealloc;
-(id)dictionary;
-(id)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(id)arg1 ;
-(unsigned long long)maxRemoteParticipants;
-(void)setMaxRemoteParticipants:(unsigned long long)arg1 ;
-(long long)sessionMode;
-(void)setSessionMode:(long long)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
@end

