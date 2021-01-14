/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSNumber, NSUUID, NSString;

@interface HMDMediaDestinationModel : HMDBackingStoreModelObject <HMFLogging>

@property (retain) NSNumber * type; 
@property (retain) NSNumber * supportedOptions; 
@property (retain) NSUUID * audioGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)properties;
-(id)privateDescription;
-(id)logIdentifier;
-(NSString *)description;
-(id)attributeDescriptions;
-(id)initWithDestination:(id)arg1 changeType:(unsigned long long)arg2 ;
@end

