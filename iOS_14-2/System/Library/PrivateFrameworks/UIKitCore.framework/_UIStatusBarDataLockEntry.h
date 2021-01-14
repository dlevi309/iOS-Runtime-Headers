/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataLockEntry : _UIStatusBarDataEntry {

	long long _unlockFailureCount;

}

@property (assign,nonatomic) long long unlockFailureCount;              //@synthesize unlockFailureCount=_unlockFailureCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_ui_descriptionBuilder;
-(void)setUnlockFailureCount:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)unlockFailureCount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

