/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSArray;


@protocol CRKOutputDeviceBrowsingSession
@property (nonatomic,copy,readonly) NSArray * outputDevices; 
@required
-(NSArray *)outputDevices;
-(void)invalidate;
-(id)observeBrowsedOutputDeviceChangesWithHandler:(/*^block*/id)arg1;

@end

