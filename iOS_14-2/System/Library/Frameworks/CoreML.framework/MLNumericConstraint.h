/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)minNumber;
-(NSNumber *)maxNumber;
-(void)setMinNumber:(NSNumber *)arg1 ;
-(void)setMaxNumber:(NSNumber *)arg1 ;
-(NSSet *)enumeratedNumbers;
-(void)setEnumeratedNumbers:(NSSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

