/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@interface TKPickerItem : NSObject {

	long long _section;

}

@property (assign,setter=_setSection:,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
-(id)description;
-(long long)section;
-(void)_setSection:(long long)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withStringValue:(id)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withIntegerValue:(long long)arg2 toString:(id)arg3 ;
-(void)_appendDescriptionOfAttributeNamed:(id)arg1 withBoolValue:(BOOL)arg2 toString:(id)arg3 ;
@end

