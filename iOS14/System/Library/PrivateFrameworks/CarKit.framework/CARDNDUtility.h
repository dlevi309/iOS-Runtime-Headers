/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject {

	CARAutomaticDNDStatus* _DNDStatus;

}

@property (nonatomic,retain) CARAutomaticDNDStatus * DNDStatus;              //@synthesize DNDStatus=_DNDStatus - In the implementation block
+(id)sharedInstance;
-(CARAutomaticDNDStatus *)DNDStatus;
-(void)setDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
-(id)outputFromRhodesUtility;
@end

