/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
@end

