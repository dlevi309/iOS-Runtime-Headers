/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSlotNotification.h>

@class TKSmartCardSlot, NSHashTable;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSmartCardSlotNotification> {

	TKSmartCardSlot* _slot;
	NSHashTable* _cards;

}

@property (readonly) NSHashTable * cards;              //@synthesize cards=_cards - In the implementation block
-(NSHashTable *)cards;
-(void)notifyWithParameters:(id)arg1 ;
-(void)cardSessionRequested;
-(id)initWithSlot:(id)arg1 ;
@end

