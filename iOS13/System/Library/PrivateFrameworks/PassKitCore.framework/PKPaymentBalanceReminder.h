/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(NSDecimalNumber *)threshold;
-(void)setThreshold:(NSDecimalNumber *)arg1 ;
-(id)initWithThreshold:(id)arg1 isEnabled:(BOOL)arg2 ;
@end

