/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
*/

#import <ProximityControl/PCDisplayContext.h>

@class NSString, MRNowPlayingPlayerResponse;

@interface PCMediaRemoteDisplayContext : PCDisplayContext {

	NSString* _mediaRemoteID;
	MRNowPlayingPlayerResponse* _proxDeviceState;
	MRNowPlayingPlayerResponse* _selectedDeviceState;
	MRNowPlayingPlayerResponse* _localDeviceState;

}

@property (nonatomic,copy) NSString * mediaRemoteID;                                      //@synthesize mediaRemoteID=_mediaRemoteID - In the implementation block
@property (nonatomic,copy) MRNowPlayingPlayerResponse * proxDeviceState;                  //@synthesize proxDeviceState=_proxDeviceState - In the implementation block
@property (nonatomic,copy) MRNowPlayingPlayerResponse * selectedDeviceState;              //@synthesize selectedDeviceState=_selectedDeviceState - In the implementation block
@property (nonatomic,copy) MRNowPlayingPlayerResponse * localDeviceState;                 //@synthesize localDeviceState=_localDeviceState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)mediaRemoteID;
-(void)setProxDeviceState:(MRNowPlayingPlayerResponse *)arg1 ;
-(void)setSelectedDeviceState:(MRNowPlayingPlayerResponse *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMediaRemoteID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(MRNowPlayingPlayerResponse *)proxDeviceState;
-(MRNowPlayingPlayerResponse *)selectedDeviceState;
-(MRNowPlayingPlayerResponse *)localDeviceState;
-(void)setLocalDeviceState:(MRNowPlayingPlayerResponse *)arg1 ;
@end

