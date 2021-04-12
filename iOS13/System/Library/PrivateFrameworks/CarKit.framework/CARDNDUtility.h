/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject {

	CARAutomaticDNDStatus* _DNDStatus;

}

@property (nonatomic,retain) CARAutomaticDNDStatus * DNDStatus;              //@synthesize DNDStatus=_DNDStatus - In the implementation block
+(id)sharedInstance;
-(CARAutomaticDNDStatus *)DNDStatus;
-(id)outputFromRhodesUtility;
-(void)setDNDStatus:(CARAutomaticDNDStatus *)arg1 ;
@end

