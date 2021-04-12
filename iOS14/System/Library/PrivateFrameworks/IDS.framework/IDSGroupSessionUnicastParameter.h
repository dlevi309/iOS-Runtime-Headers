/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_nw_parameters, OS_nw_endpoint;
@class NSString, NSObject;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding, NSCopying> {

	int _socket;
	NSString* _groupSessionID;
	unsigned long long _localParticipantID;
	unsigned long long _remoteParticipantID;
	unsigned long long _connectionIndex;
	long long _dataMode;
	NSObject*<OS_nw_parameters> _parameters;
	NSObject*<OS_nw_endpoint> _endpoint;

}

@property (nonatomic,readonly) NSString * groupSessionID;                           //@synthesize groupSessionID=_groupSessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long localParticipantID;               //@synthesize localParticipantID=_localParticipantID - In the implementation block
@property (nonatomic,readonly) unsigned long long remoteParticipantID;              //@synthesize remoteParticipantID=_remoteParticipantID - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionIndex;                  //@synthesize connectionIndex=_connectionIndex - In the implementation block
@property (nonatomic,readonly) long long dataMode;                                  //@synthesize dataMode=_dataMode - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_parameters> parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_endpoint> endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (assign) int socket;                                                      //@synthesize socket=_socket - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)realTimeContext;
-(NSObject*<OS_nw_parameters>)parameters;
-(long long)dataMode;
-(int)socket;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_endpoint>)endpoint;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSocket:(int)arg1 ;
-(unsigned long long)localParticipantID;
-(void)_requestNWConnectionforIDSGroupSessionUnicastParameter:(/*^block*/id)arg1 ;
-(id)initWithGroupSessionID:(id)arg1 localParticipantID:(unsigned long long)arg2 remoteParticipantID:(unsigned long long)arg3 dataMode:(long long)arg4 connectionIndex:(unsigned long long)arg5 ;
-(unsigned long long)connectionIndex;
-(NSString *)groupSessionID;
-(void)_setUpNWConnectionforTesting:(/*^block*/id)arg1 ;
-(unsigned long long)remoteParticipantID;
-(id)initWithConnectedSocket:(int)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3 ;
-(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

