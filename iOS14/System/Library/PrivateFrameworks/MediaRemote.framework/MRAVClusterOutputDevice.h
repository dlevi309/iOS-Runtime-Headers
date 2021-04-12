/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVConcreteOutputDevice.h>

@class NSArray;

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice {

	NSArray* _memberOutputDevices;

}

@property (nonatomic,readonly) NSArray * memberOutputDevices;              //@synthesize memberOutputDevices=_memberOutputDevices - In the implementation block
-(unsigned)deviceType;
-(id)uid;
-(unsigned)deviceSubtype;
-(id)clusterComposition;
-(id)groupID;
-(NSArray *)memberOutputDevices;
-(id)initWithPrimaryOutputDevice:(id)arg1 members:(id)arg2 sourceInfo:(id)arg3 ;
-(id)initWithDevices:(id)arg1 sourceInfo:(id)arg2 ;
-(id)primaryID;
@end

