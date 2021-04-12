/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setCurrentValue:(NSArray *)arg1 ;
-(id)getCurrentValue;
-(NSArray *)scanRequirements;
-(void)setScanRequirements:(NSArray *)arg1 ;
@end

