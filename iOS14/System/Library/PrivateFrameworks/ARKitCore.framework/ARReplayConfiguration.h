/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARCustomTechniquesConfiguration.h>
#import <ARKitCore/ARReplaySensorDelegate.h>

@protocol ARReplaySensorProtocol, ARReplayConfigurationDelegate;
@class NSNumber, NSURL, NSString;

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {

	id<ARReplaySensorProtocol> _replaySensor;
	NSNumber* _vioSessionID;
	NSURL* _fileURL;
	id<ARReplayConfigurationDelegate> _delegate;

}

@property (nonatomic,readonly) NSURL * fileURL;                                              //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic,__weak) id<ARReplayConfigurationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsFrameSemantics:(unsigned long long)arg1 ;
-(id)initPrivate;
-(id<ARReplayConfigurationDelegate>)delegate;
-(void)pause;
-(void)play;
-(NSURL *)fileURL;
-(void)setDelegate:(id<ARReplayConfigurationDelegate>)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)worldAlignment;
-(id)parentImageSensorSettings;
-(id)imageSensorSettings;
-(id)secondaryTechniques;
-(id)imageSensorSettingsForUltraWide;
-(id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 ;
-(void)replaySensorDidFinishReplayingData;
-(void)ensureTechniqueAndCustomSensorCompatibility;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 replayMode:(long long)arg3 outError:(id*)arg4 ;
-(id)initWithBaseConfiguration:(id)arg1 fileURL:(id)arg2 outError:(id*)arg3 ;
-(id)initWithBaseConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3 ;
@end

