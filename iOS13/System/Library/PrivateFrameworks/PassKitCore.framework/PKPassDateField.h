/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(long long)dateStyle;
-(void)setDateStyle:(long long)arg1 ;
-(long long)timeStyle;
-(void)setTimeStyle:(long long)arg1 ;
-(id)asDictionary;
-(void)setIsRelative:(BOOL)arg1 ;
-(void)setIgnoresTimeZone:(BOOL)arg1 ;
-(BOOL)isRelative;
-(BOOL)ignoresTimeZone;
@end

