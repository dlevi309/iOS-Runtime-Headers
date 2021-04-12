/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)_ui_descriptionBuilder;
-(BOOL)lowDataModeActive;
-(void)setLowDataModeActive:(BOOL)arg1 ;
@end

