/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDecimalNumber* _threshold;

}

@property (nonatomic,retain) NSDecimalNumber * threshold;                //@synthesize threshold=_threshold - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDecimalNumber *)threshold;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithThreshold:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setThreshold:(NSDecimalNumber *)arg1 ;
@end

