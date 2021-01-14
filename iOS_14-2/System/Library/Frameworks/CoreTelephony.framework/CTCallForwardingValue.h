/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTCallForwardingValue : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	int _reason;
	int _clss;
	NSString* _saveNumber;
	NSNumber* _noReplyTime;

}

@property (assign,nonatomic) int reason;                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int clss;                            //@synthesize clss=_clss - In the implementation block
@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * saveNumber;               //@synthesize saveNumber=_saveNumber - In the implementation block
@property (nonatomic,retain) NSNumber * noReplyTime;              //@synthesize noReplyTime=_noReplyTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)clss;
-(BOOL)enabled;
-(void)setClss:(int)arg1 ;
-(NSNumber *)noReplyTime;
-(NSString *)saveNumber;
-(void)setNoReplyTime:(NSNumber *)arg1 ;
-(void)setSaveNumber:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)reason;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

