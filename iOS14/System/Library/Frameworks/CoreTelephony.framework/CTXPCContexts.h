/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID;

@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSUUID* _dataPreferred;
	NSUUID* _voicePreferred;

}

@property (nonatomic,retain) NSArray * subscriptions;              //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSUUID * dataPreferred;               //@synthesize dataPreferred=_dataPreferred - In the implementation block
@property (nonatomic,retain) NSUUID * voicePreferred;              //@synthesize voicePreferred=_voicePreferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(NSArray *)subscriptions;
-(id)findForAccount:(id)arg1 ;
-(id)findForUuid:(id)arg1 ;
-(void)setVoicePreferred:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)voicePreferred;
-(void)setDataPreferred:(NSUUID *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)findForSlot:(long long)arg1 ;
-(NSUUID *)dataPreferred;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

