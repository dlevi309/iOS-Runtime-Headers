/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

