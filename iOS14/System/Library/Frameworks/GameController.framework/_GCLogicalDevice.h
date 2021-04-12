/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class _GCDeviceConfiguration, NSSet;


@protocol _GCLogicalDevice <_GCDevice>
@property (readonly) _GCDeviceConfiguration * configuration; 
@property (readonly) NSSet * underlyingDevices; 
@optional
-(void)deactivateLogical;
-(void)activateLogical;

@required
-(_GCDeviceConfiguration *)configuration;
-(NSSet *)underlyingDevices;

@end

