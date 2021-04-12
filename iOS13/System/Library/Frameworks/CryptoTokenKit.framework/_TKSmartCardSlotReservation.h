/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	BOOL _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(NSNumber *)protocols;
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)setProtocols:(NSNumber *)arg1 ;
@end

