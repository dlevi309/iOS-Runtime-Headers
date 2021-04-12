/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlotNotification.h>

@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {

	TKSmartCardSlot* _slot;
	NSHashTable* _cards;

}

@property (readonly) NSHashTable * cards;              //@synthesize cards=_cards - In the implementation block
-(id)initWithSlot:(id)arg1 ;
-(NSHashTable *)cards;
-(void)notifyWithParameters:(id)arg1 ;
-(void)cardSessionRequested;
@end

