/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@interface SKProductSubscriptionPeriod : NSObject {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long numberOfUnits; 
@property (nonatomic,readonly) unsigned long long unit; 
-(id)init;
-(unsigned long long)unit;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithISO8601String:(id)arg1 ;
-(unsigned long long)numberOfUnits;
-(void)_setNumberOfUnits:(unsigned long long)arg1 ;
-(void)_setUnit:(unsigned long long)arg1 ;
@end

