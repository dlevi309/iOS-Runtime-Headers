/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelEntryExit : NSObject <NSSecureCoding> {

	double _entry_s;
	double _exit_s;

}

@property (assign,nonatomic) double entry_s;              //@synthesize entry_s=_entry_s - In the implementation block
@property (assign,nonatomic) double exit_s;               //@synthesize exit_s=_exit_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(double)exit_s;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)entry_s;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEntry:(double)arg1 exit:(double)arg2 ;
-(void)setEntry_s:(double)arg1 ;
-(void)setExit_s:(double)arg1 ;
@end

