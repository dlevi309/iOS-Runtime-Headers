/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, NSURL, NSArray;

@interface ASAPlugin : ASAObject

@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSURL * resourceBundleURL; 
@property (nonatomic,copy,readonly) NSString * manufacturer; 
@property (nonatomic,copy,readonly) NSArray * boxObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * boxes; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
+(id)pluginWithBundleIdentifier:(id)arg1 ;
-(NSString *)manufacturer;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSArray *)boxes;
-(NSString *)bundleID;
-(NSURL *)resourceBundleURL;
-(id)audioDeviceWithUID:(id)arg1 ;
-(unsigned)audioDeviceObjectIDWithUID:(id)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(unsigned)boxObjectIDWithUID:(id)arg1 ;
-(unsigned)clockDeviceObjectIDWithUID:(id)arg1 ;
-(NSArray *)boxObjectIDs;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(id)deviceObjectIDs;
-(id)boxWithUID:(id)arg1 ;
-(id)clockDeviceWithUID:(id)arg1 ;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
@end

