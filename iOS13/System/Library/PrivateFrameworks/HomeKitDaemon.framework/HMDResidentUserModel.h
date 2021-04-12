/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDUserModel.h>

@class NSString, HMDDevice, NSNumber;

@interface HMDResidentUserModel : HMDUserModel {

	NSString* _displayName;

}

@property (nonatomic,retain) HMDDevice * device; 
@property (nonatomic,retain) NSNumber * configState; 
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier; 
+(id)properties;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

