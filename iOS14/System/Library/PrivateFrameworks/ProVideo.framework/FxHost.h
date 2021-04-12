/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/FxStreamProviding.h>
#import <libobjc.A.dylib/FxHostEnvironment.h>

@interface FxHost : NSObject <FxStreamProviding, FxHostEnvironment> {

	FxHostPriv* _priv;

}
+(id)host;
+(id)fxMetaPlugsFolderURLs;
+(id)_createPathArrayFromURLArray:(id)arg1 ;
+(id)fxPlugsFolderURLs;
+(id)_scanFxMetaPlugWrappersWithPlugInManager:(id)arg1 ;
+(id)internalPlugInsFolderURL;
+(id)plugInsFolderURLs;
-(id)uniqueID;
-(id)init;
-(id)hostName;
-(int)majorVersion;
-(int)minorVersion;
-(void)dealloc;
-(unsigned)timeScaleForStream:(id)arg1 ;
-(double)startTimeForStream:(id)arg1 ;
-(double)durationForStream:(id)arg1 ;
-(double)frameDurationForStream:(id)arg1 ;
-(BOOL)isStreamPremultiplied:(id)arg1 ;
-(double)pixelAspectForStream:(id)arg1 ;
-(BOOL)isContextTypeSupported:(int)arg1 bySample:(id)arg2 ;
-(unsigned long long)fieldOrderForSample:(id)arg1 ;
-(BOOL)isSamplePredetermined:(id)arg1 ;
-(id)requiredSamplesForSample:(id)arg1 ;
-(id)evaluateSample:(id)arg1 withOptions:(id)arg2 ;
-(id)domainOfDefinitionForSample:(id)arg1 ;
-(id)_fxMetaPlugWrapperForPlugInTypeUUID:(id)arg1 ;
-(id)_createDefaultSearchableURLsDict;
-(id)_createDefaultSupportBuiltInsDict;
-(id)searchableURLsForPlugInTypeUUID:(id)arg1 ;
-(void)invalidateFxPlugDescriptorArray;
-(BOOL)allowBuiltInEffectsForPlugInTypeUUID:(id)arg1 ;
-(void)scanFxPlugsIfNecessary;
-(id)_findGroupInList:(id)arg1 withIdenticalDescriptor:(id)arg2 ;
-(id)_fxPlugGroupListForOptionalFlavor:(id)arg1 ;
-(unsigned)globalTimeScale;
-(double)globalFrameDuration;
-(BOOL)supportsParameterClass:(Class)arg1 ;
-(id)defaultSearchableURLsForPlugInTypeUUID:(id)arg1 ;
-(void)setSearchableURLs:(id)arg1 forPlugInTypeUUID:(id)arg2 ;
-(id)defaultSupportedPlugInTypeUUIDs;
-(id)supportedPlugInTypeUUIDs;
-(void)setSupportedPlugInTypeUUIDs:(id)arg1 ;
-(void)setAllowBuiltInEffects:(BOOL)arg1 forPlugInTypeUUID:(id)arg2 ;
-(id)fxPlugGroupList;
-(id)fxPlugGroupListForFlavor:(id)arg1 ;
-(id)fxPlugDescriptorWithUUID:(id)arg1 ;
@end

