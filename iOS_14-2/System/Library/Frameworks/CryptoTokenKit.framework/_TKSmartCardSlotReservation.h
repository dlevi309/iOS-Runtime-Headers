/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	BOOL _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(BOOL)exclusive;
-(void)setExclusive:(BOOL)arg1 ;
-(void)setProtocols:(NSNumber *)arg1 ;
-(NSNumber *)protocols;
@end

