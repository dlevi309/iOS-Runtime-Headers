/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/AirPlayMirroringModule.bundle/AirPlayMirroringModule
*/


@class AVOutputContext, NSString, AVOutputDevice;

@interface MPAVOutputContextController : NSObject {

	AVOutputContext* _outputContext;
	NSString* _outputDeviceName;
	AVOutputDevice* _outputDevice;

}

@property (retain) NSString * outputDeviceName;                                                        //@synthesize outputDeviceName=_outputDeviceName - In the implementation block
@property (retain) AVOutputDevice * outputDevice;                                                      //@synthesize outputDevice=_outputDevice - In the implementation block
@property (readonly) AVOutputContext * outputContext;                                                  //@synthesize outputContext=_outputContext - In the implementation block
@property (getter=isExternalOutputDevicePicked,readonly) BOOL externalOutputDevicePicked; 
+(id)keyPathsForValuesAffectingExternalOutputDevicePicked;
-(id)init;
-(AVOutputContext *)outputContext;
-(AVOutputDevice *)outputDevice;
-(id)initWithOutputContext:(id)arg1 ;
-(void)setOutputDevice:(AVOutputDevice *)arg1 ;
-(void)_outputDeviceChangedNotification:(id)arg1 ;
-(NSString *)outputDeviceName;
-(BOOL)isExternalOutputDevicePicked;
-(void)setOutputDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSelectedOutputDevice;
-(void)setOutputDeviceName:(NSString *)arg1 ;
@end

