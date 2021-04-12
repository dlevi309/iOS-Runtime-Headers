/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUDevice;
@class NSString, NSArray;

@interface NUPlatform : NSObject {

	BOOL _supportsAutomaticGraphicsSwitching;
	BOOL _hasHeadlessGPU;
	BOOL _hasExtendedColorDisplay;
	NSString* _name;
	NSArray* _devices;
	id<NUDevice> _integratedDevice;
	id<NUDevice> _discreteDevice;
	id<NUDevice> _headlessDevice;
	id<NUDevice> _cpuDevice;

}

@property (nonatomic,copy) NSArray * devices;                                       //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL supportsAutomaticGraphicsSwitching;               //@synthesize supportsAutomaticGraphicsSwitching=_supportsAutomaticGraphicsSwitching - In the implementation block
@property (nonatomic,retain) id<NUDevice> integratedDevice;                         //@synthesize integratedDevice=_integratedDevice - In the implementation block
@property (nonatomic,retain) id<NUDevice> discreteDevice;                           //@synthesize discreteDevice=_discreteDevice - In the implementation block
@property (assign,nonatomic) BOOL hasHeadlessGPU;                                   //@synthesize hasHeadlessGPU=_hasHeadlessGPU - In the implementation block
@property (nonatomic,retain) id<NUDevice> headlessDevice;                           //@synthesize headlessDevice=_headlessDevice - In the implementation block
@property (nonatomic,retain) id<NUDevice> cpuDevice;                                //@synthesize cpuDevice=_cpuDevice - In the implementation block
@property (nonatomic,readonly) BOOL defaultSupportsLiveVideoRendering; 
@property (assign,nonatomic) BOOL hasExtendedColorDisplay;                          //@synthesize hasExtendedColorDisplay=_hasExtendedColorDisplay - In the implementation block
@property (nonatomic,readonly) id<NUDevice> mainDevice; 
@property (nonatomic,readonly) NSArray * displays; 
@property (nonatomic,readonly) id<NUDisplay> mainDisplay; 
@property (nonatomic,readonly) BOOL supportsLiveVideoRendering; 
+(id)currentPlatform;
-(void)clearCaches;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(NSArray *)displays;
-(BOOL)hasExtendedColorDisplay;
-(id)debugDescription;
-(id<NUDisplay>)mainDisplay;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id<NUDevice>)mainDevice;
-(id)deviceForDisplay:(id)arg1 ;
-(id)displayWithIdentifier:(id)arg1 ;
-(BOOL)defaultSupportsLiveVideoRendering;
-(BOOL)supportsLiveVideoRendering;
-(BOOL)supportsAutomaticGraphicsSwitching;
-(void)setSupportsAutomaticGraphicsSwitching:(BOOL)arg1 ;
-(id<NUDevice>)integratedDevice;
-(void)setIntegratedDevice:(id<NUDevice>)arg1 ;
-(id<NUDevice>)discreteDevice;
-(void)setDiscreteDevice:(id<NUDevice>)arg1 ;
-(BOOL)hasHeadlessGPU;
-(void)setHasHeadlessGPU:(BOOL)arg1 ;
-(id<NUDevice>)headlessDevice;
-(void)setHeadlessDevice:(id<NUDevice>)arg1 ;
-(id<NUDevice>)cpuDevice;
-(void)setCpuDevice:(id<NUDevice>)arg1 ;
-(void)setHasExtendedColorDisplay:(BOOL)arg1 ;
@end

