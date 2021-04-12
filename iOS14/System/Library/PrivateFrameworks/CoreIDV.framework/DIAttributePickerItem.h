/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/CoreIDV-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DIAttributePickerItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _localizedDisplayName;
	NSString* _value;

}

@property (nonatomic,copy) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy) NSString * value;                             //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(NSString *)localizedDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
@end

