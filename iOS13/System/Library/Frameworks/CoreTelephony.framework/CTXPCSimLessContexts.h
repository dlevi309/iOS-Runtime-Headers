/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID;

@interface CTXPCSimLessContexts : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSUUID* _voicePreferred;

}

@property (nonatomic,retain) NSArray * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSUUID * voicePreferred;              //@synthesize voicePreferred=_voicePreferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSUUID *)voicePreferred;
-(void)setVoicePreferred:(NSUUID *)arg1 ;
-(id)findForUuid:(id)arg1 ;
-(id)findForAccount:(id)arg1 ;
@end

