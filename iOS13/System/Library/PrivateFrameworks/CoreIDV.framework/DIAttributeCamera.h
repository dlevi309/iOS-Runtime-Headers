/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DIAttributeCamera : DIAttribute <NSSecureCoding> {

	NSArray* currentValue;
	NSArray* _scanRequirements;

}

@property (nonatomic,retain) NSArray * scanRequirements;                               //@synthesize scanRequirements=_scanRequirements - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) NSArray * currentValue; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValue;
-(void)setCurrentValue:(NSArray *)arg1 ;
-(id)getCurrentValue;
-(NSArray *)scanRequirements;
-(void)setScanRequirements:(NSArray *)arg1 ;
@end

