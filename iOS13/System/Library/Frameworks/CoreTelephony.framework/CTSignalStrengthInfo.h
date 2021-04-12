/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)bars;
-(NSNumber *)displayBars;
-(NSNumber *)maxDisplayBars;
-(void)setBars:(NSNumber *)arg1 ;
-(void)setDisplayBars:(NSNumber *)arg1 ;
-(void)setMaxDisplayBars:(NSNumber *)arg1 ;
@end

