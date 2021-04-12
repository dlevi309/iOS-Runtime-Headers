/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMLedger : NSObject {

	ledger_entry_info* _ledgerEntries;
	long long _ledgerCount;
	int _footprintLedgerIndex;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(long long)footprint;
@end

