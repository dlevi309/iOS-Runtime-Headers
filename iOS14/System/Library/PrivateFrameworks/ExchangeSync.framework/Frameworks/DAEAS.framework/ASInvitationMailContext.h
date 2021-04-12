/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/


@class NSString, NSArray;

@interface ASInvitationMailContext : NSObject {

	BOOL _isMyInvite;
	int _emailResponse;
	NSString* _eventUID;
	NSString* _serverID;
	NSArray* _attendeeUUIDs;

}

@property (nonatomic,retain) NSString * eventUID;                  //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSString * serverID;                  //@synthesize serverID=_serverID - In the implementation block
@property (assign,nonatomic) BOOL isMyInvite;                      //@synthesize isMyInvite=_isMyInvite - In the implementation block
@property (assign,nonatomic) int emailResponse;                    //@synthesize emailResponse=_emailResponse - In the implementation block
@property (nonatomic,retain) NSArray * attendeeUUIDs;              //@synthesize attendeeUUIDs=_attendeeUUIDs - In the implementation block
-(NSString *)eventUID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)serverID;
-(void)setEventUID:(NSString *)arg1 ;
-(BOOL)isMyInvite;
-(void)setIsMyInvite:(BOOL)arg1 ;
-(int)emailResponse;
-(void)setEmailResponse:(int)arg1 ;
-(NSArray *)attendeeUUIDs;
-(void)setAttendeeUUIDs:(NSArray *)arg1 ;
@end

