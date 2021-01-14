/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVOutputDevice *)outputDevice;
-(NSString *)outputDeviceName;
-(id)initWithOutputContext:(id)arg1 ;
-(void)setOutputDeviceName:(NSString *)arg1 ;
-(void)setOutputDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AVOutputContext *)outputContext;
-(void)setOutputDevice:(AVOutputDevice *)arg1 ;
-(BOOL)isExternalOutputDevicePicked;
-(void)_outputDeviceChangedNotification:(id)arg1 ;
-(void)updateSelectedOutputDevice;
@end

