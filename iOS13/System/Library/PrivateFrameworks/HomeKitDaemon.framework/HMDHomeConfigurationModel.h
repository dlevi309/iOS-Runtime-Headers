/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject {

	BOOL _homeHasLocalChanges;

}

@property (nonatomic,retain) NSNumber * configurationVersion; 
@property (assign,nonatomic) BOOL homeHasLocalChanges;                     //@synthesize homeHasLocalChanges=_homeHasLocalChanges - In the implementation block
+(id)properties;
-(BOOL)homeHasLocalChanges;
-(void)setHomeHasLocalChanges:(BOOL)arg1 ;
@end

