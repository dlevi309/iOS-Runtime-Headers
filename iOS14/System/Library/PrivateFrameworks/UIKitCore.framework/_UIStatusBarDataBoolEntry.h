/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataBoolEntry : _UIStatusBarDataEntry {

	BOOL _boolValue;

}

@property (assign,nonatomic) BOOL boolValue;              //@synthesize boolValue=_boolValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entryWithBoolValue:(BOOL)arg1 ;
-(BOOL)boolValue;
-(id)_ui_descriptionBuilder;
-(id)initFromData:(const SCD_Struct_UI120*)arg1 type:(int)arg2 boolValue:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

