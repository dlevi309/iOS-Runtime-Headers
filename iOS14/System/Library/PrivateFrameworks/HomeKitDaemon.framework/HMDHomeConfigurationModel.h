/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

