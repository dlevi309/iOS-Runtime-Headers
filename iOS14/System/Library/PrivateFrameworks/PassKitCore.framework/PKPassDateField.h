/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassField.h>

@interface PKPassDateField : PKPassField {

	BOOL _isRelative;
	BOOL _ignoresTimeZone;
	long long _dateStyle;
	long long _timeStyle;

}

@property (assign,nonatomic) long long dateStyle;               //@synthesize dateStyle=_dateStyle - In the implementation block
@property (assign,nonatomic) long long timeStyle;               //@synthesize timeStyle=_timeStyle - In the implementation block
@property (assign,nonatomic) BOOL isRelative;                   //@synthesize isRelative=_isRelative - In the implementation block
@property (assign,nonatomic) BOOL ignoresTimeZone;              //@synthesize ignoresTimeZone=_ignoresTimeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)dateStyle;
-(long long)timeStyle;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRelative;
-(void)setTimeStyle:(long long)arg1 ;
-(void)setDateStyle:(long long)arg1 ;
-(void)setIsRelative:(BOOL)arg1 ;
-(void)setIgnoresTimeZone:(BOOL)arg1 ;
-(BOOL)ignoresTimeZone;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
@end

