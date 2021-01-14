/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataIntegerEntry.h>

@interface _UIStatusBarDataNetworkEntry : _UIStatusBarDataIntegerEntry {

	BOOL _lowDataModeActive;
	long long _status;

}

@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL lowDataModeActive;              //@synthesize lowDataModeActive=_lowDataModeActive - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_ui_descriptionBuilder;
-(BOOL)lowDataModeActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLowDataModeActive:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
@end

