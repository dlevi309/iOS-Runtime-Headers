/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVEndpoint.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, MRTransportExternalDevice, MRAVOutputDevice, NSObject;

@interface MRAVConcreteEndpoint : MRAVEndpoint {

	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MRTransportExternalDevice* _externalDevice;
	MRAVOutputDevice* _designatedGroupLeader;
	long long _connectionType;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSArray * outputDevices; 
@property (nonatomic,retain) MRTransportExternalDevice * externalDevice; 
-(void)dealloc;
-(id)uniqueIdentifier;
-(long long)connectionType;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSArray *)outputDevices;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(MRTransportExternalDevice *)externalDevice;
-(void)setExternalDevice:(MRTransportExternalDevice *)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)canModifyGroupMembership;
-(id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(id)designatedGroupLeader;
@end

