/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)reason;
-(void)setReason:(int)arg1 ;
-(int)clss;
-(NSString *)saveNumber;
-(NSNumber *)noReplyTime;
-(void)setClss:(int)arg1 ;
-(void)setSaveNumber:(NSString *)arg1 ;
-(void)setNoReplyTime:(NSNumber *)arg1 ;
@end

