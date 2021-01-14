/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDSettingsMetadataParserProtocol.h>

@protocol HMDSettingsControllerDependency;
@class NSString;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol> {

	id<HMDSettingsControllerDependency> _dependency;

}

@property (__weak,readonly) id<HMDSettingsControllerDependency> dependency;              //@synthesize dependency=_dependency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDSettingsControllerDependency>)dependency;
-(id)logIdentifier;
-(id)modelsFromMetadata:(id)arg1 ;
-(id)initWithDependency:(id)arg1 ;
@end

