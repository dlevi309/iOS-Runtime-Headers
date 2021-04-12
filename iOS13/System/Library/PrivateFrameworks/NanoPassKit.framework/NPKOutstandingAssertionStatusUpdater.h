/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NPKProvisioningServiceAgentStatusUpdater.h>

@class NSUUID;

@interface NPKOutstandingAssertionStatusUpdater : NPKProvisioningServiceAgentStatusUpdater {

	int _assertType;
	NSUUID* _assertionUUID;

}

@property (nonatomic,retain) NSUUID * assertionUUID;              //@synthesize assertionUUID=_assertionUUID - In the implementation block
@property (assign,nonatomic) int assertType;                      //@synthesize assertType=_assertType - In the implementation block
-(NSUUID *)assertionUUID;
-(void)setAssertionUUID:(NSUUID *)arg1 ;
-(int)assertType;
-(void)setAssertType:(int)arg1 ;
@end

