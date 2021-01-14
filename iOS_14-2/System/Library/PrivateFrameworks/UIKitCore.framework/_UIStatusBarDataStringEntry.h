/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@class NSString;

@interface _UIStatusBarDataStringEntry : _UIStatusBarDataEntry {

	NSString* _stringValue;

}

@property (nonatomic,copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithStringValue:(id)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)initFromData:(const SCD_Struct_UI120*)arg1 type:(int)arg2 string:(const char*)arg3 maxLength:(int)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

