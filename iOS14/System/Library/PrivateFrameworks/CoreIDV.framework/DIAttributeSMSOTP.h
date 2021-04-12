/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttributeText.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DIAttributeSMSOTP : DIAttributeText <NSSecureCoding> {

	unsigned long long _validityInSeconds;

}

@property (assign,nonatomic) unsigned long long validityInSeconds;              //@synthesize validityInSeconds=_validityInSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(id)arg1 ;
-(id)init;
-(id)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)submissionString;
-(void)setCurrentValue:(id)arg1 ;
-(id)getCurrentValue;
-(unsigned long long)validityInSeconds;
-(void)setValidityInSeconds:(unsigned long long)arg1 ;
@end

