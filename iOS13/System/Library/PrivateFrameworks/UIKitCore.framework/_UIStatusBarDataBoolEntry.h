/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setBoolValue:(BOOL)arg1 ;
-(id)initFromData:(const SCD_Struct_UI109*)arg1 type:(int)arg2 boolValue:(BOOL)arg3 ;
@end

