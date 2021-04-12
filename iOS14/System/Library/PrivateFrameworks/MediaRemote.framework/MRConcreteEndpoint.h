/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVEndpoint.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, MRExternalDevice, MRAVOutputDevice, NSObject;

@interface MRConcreteEndpoint : MRAVEndpoint {

	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MRExternalDevice* _externalDevice;
	MRAVOutputDevice* _designatedGroupLeader;
	long long _connectionType;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,copy) NSArray * outputDevices; 
-(void)setOutputDevices:(NSArray *)arg1 ;
-(id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(BOOL)isProxyGroupPlayer;
-(long long)connectionType;
-(id)externalDevice;
-(void)setExternalDevice:(id)arg1 ;
-(id)uniqueIdentifier;
-(NSArray *)outputDevices;
-(BOOL)canModifyGroupMembership;
-(id)designatedGroupLeader;
@end

