/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _bars;
	NSNumber* _displayBars;
	NSNumber* _maxDisplayBars;

}

@property (nonatomic,retain) NSNumber * bars;                        //@synthesize bars=_bars - In the implementation block
@property (nonatomic,retain) NSNumber * displayBars;                 //@synthesize displayBars=_displayBars - In the implementation block
@property (nonatomic,retain) NSNumber * maxDisplayBars;              //@synthesize maxDisplayBars=_maxDisplayBars - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBars:(NSNumber *)arg1 ;
-(NSNumber *)bars;
-(NSNumber *)maxDisplayBars;
-(id)description;
-(NSNumber *)displayBars;
-(id)initWithCoder:(id)arg1 ;
-(void)setDisplayBars:(NSNumber *)arg1 ;
-(void)setMaxDisplayBars:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

