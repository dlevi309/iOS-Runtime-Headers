/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttributeText.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {

	unsigned long long _validityInSeconds;

}

@property (assign,nonatomic) unsigned long long validityInSeconds;              //@synthesize validityInSeconds=_validityInSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(id)submissionString;
-(id)getCurrentValue;
-(unsigned long long)validityInSeconds;
-(void)setValidityInSeconds:(unsigned long long)arg1 ;
@end

