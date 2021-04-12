/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet;

@interface MLNumericConstraint : NSObject <NSSecureCoding> {

	NSNumber* _minNumber;
	NSNumber* _maxNumber;
	NSSet* _enumeratedNumbers;

}

@property (nonatomic,retain) NSNumber * minNumber;                   //@synthesize minNumber=_minNumber - In the implementation block
@property (nonatomic,retain) NSNumber * maxNumber;                   //@synthesize maxNumber=_maxNumber - In the implementation block
@property (nonatomic,retain) NSSet * enumeratedNumbers;              //@synthesize enumeratedNumbers=_enumeratedNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)numericConstraintWithMinNumber:(id)arg1 maxNumber:(id)arg2 ;
+(id)numericConstraintWithEnumeratedNumbers:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)minNumber;
-(void)setMinNumber:(NSNumber *)arg1 ;
-(NSNumber *)maxNumber;
-(void)setMaxNumber:(NSNumber *)arg1 ;
-(NSSet *)enumeratedNumbers;
-(void)setEnumeratedNumbers:(NSSet *)arg1 ;
@end

