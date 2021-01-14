/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol VCAudioSessionDelegate;
@class VCAudioSessionMediaProperties;

@interface VCAudioSessionClient : NSObject <NSCopying> {

	id<VCAudioSessionDelegate> _notificationClient;
	VCAudioSessionMediaProperties* _mediaProperties;
	unsigned char _clientType;

}

@property (assign,nonatomic) unsigned char clientType;                                     //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) id<VCAudioSessionDelegate> notificationClient; 
@property (nonatomic,retain) VCAudioSessionMediaProperties * mediaProperties;              //@synthesize mediaProperties=_mediaProperties - In the implementation block
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id<VCAudioSessionDelegate>)notificationClient;
-(void)setMediaProperties:(VCAudioSessionMediaProperties *)arg1 ;
-(void)setNotificationClient:(id<VCAudioSessionDelegate>)arg1 ;
-(VCAudioSessionMediaProperties *)mediaProperties;
@end

