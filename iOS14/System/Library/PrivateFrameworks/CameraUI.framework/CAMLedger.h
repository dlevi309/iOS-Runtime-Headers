/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)footprint;
-(void)dealloc;
@end

