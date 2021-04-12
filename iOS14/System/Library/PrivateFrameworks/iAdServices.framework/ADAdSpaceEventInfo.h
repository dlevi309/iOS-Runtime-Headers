/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding> {

	unsigned long long _screenfuls;
	unsigned long long _slotPosition;
	unsigned long long _reuseCount;
	long long _lastErrorCode;

}

@property (assign,nonatomic) unsigned long long screenfuls;                //@synthesize screenfuls=_screenfuls - In the implementation block
@property (assign,nonatomic) unsigned long long slotPosition;              //@synthesize slotPosition=_slotPosition - In the implementation block
@property (assign,nonatomic) unsigned long long reuseCount;                //@synthesize reuseCount=_reuseCount - In the implementation block
@property (assign,nonatomic) long long lastErrorCode;                      //@synthesize lastErrorCode=_lastErrorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2 ;
-(long long)lastErrorCode;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)screenfuls;
-(void)setReuseCount:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)reuseCount;
-(void)setSlotPosition:(unsigned long long)arg1 ;
-(void)setScreenfuls:(unsigned long long)arg1 ;
-(void)setLastErrorCode:(long long)arg1 ;
-(unsigned long long)slotPosition;
@end

