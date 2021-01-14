/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriLongPressButtonSource.h>

@class NSString, SiriLongPressButtonContext;

@interface SiriTVActivationSource : SiriLongPressButtonSource {

	NSString* _deviceIdentifier;
	double _longPressInterval;
	SiriLongPressButtonContext* _context;

}

@property (assign,nonatomic) double longPressInterval;                          //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (nonatomic,retain) SiriLongPressButtonContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                         //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(id)activationSourceForIdentifier:(long long)arg1 ;
-(void)setLongPressInterval:(double)arg1 ;
-(NSString *)deviceIdentifier;
-(double)longPressInterval;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)_deviceIdentifier;
-(SiriLongPressButtonContext *)context;
-(void)setContext:(SiriLongPressButtonContext *)arg1 ;
@end

