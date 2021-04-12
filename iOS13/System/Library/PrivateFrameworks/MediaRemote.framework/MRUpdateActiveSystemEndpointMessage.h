/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (nonatomic,readonly) NSString * outputDeviceUID; 
@property (nonatomic,readonly) long long operation; 
@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) NSString * reason; 
-(unsigned long long)type;
-(NSString *)reason;
-(long long)changeType;
-(long long)operation;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 operation:(long long)arg2 changeType:(long long)arg3 reason:(id)arg4 ;
@end

