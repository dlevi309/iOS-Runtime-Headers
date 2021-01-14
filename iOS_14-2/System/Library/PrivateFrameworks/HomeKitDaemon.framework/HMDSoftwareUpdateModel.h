/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSDate, HMFSoftwareVersion, NSNumber, HMSoftwareUpdateDocumentationMetadata;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject {

	NSDate* _releaseDate;

}

@property (nonatomic,copy) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,copy) NSNumber * state; 
@property (nonatomic,copy) NSNumber * downloadSize; 
@property (nonatomic,copy) NSNumber * installDuration; 
@property (nonatomic,copy) HMSoftwareUpdateDocumentationMetadata * documentationMetadata; 
@property (nonatomic,copy) NSDate * releaseDate;                                                       //@synthesize releaseDate=_releaseDate - In the implementation block
+(id)properties;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
@end

