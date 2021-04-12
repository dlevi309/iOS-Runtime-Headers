/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDActionModel.h>

@class NSString, NSNumber;

@interface HMDCharacteristicWriteActionModel : HMDActionModel

@property (nonatomic,retain) NSString * accessory; 
@property (nonatomic,retain) NSNumber * serviceID; 
@property (nonatomic,retain) NSNumber * characteristicID; 
@property (nonatomic,retain) id targetValue; 
+(id)properties;
-(id)dependentUUIDs;
-(void)loadModelWithActionInformation:(id)arg1 ;
@end

