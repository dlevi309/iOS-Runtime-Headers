/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSNumber, NSUUID, NSString;

@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMFLogging>

@property (copy) NSArray * availableDestinationModelIdentifierStrings; 
@property (retain) NSNumber * type; 
@property (retain) NSArray * availableDestinationModelIdentifiers; 
@property (retain) NSUUID * destinationModelIdentifier; 
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
-(id)initWithData:(id)arg1 changeType:(unsigned long long)arg2 ;
-(void)setAvailableDestinationModelIdentifiers:(NSArray *)arg1 ;
-(NSArray *)availableDestinationModelIdentifiers;
@end

