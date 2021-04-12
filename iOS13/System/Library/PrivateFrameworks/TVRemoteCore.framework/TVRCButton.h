/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface TVRCButton : NSObject <NSSecureCoding> {

	BOOL _enabled;
	BOOL _hasTapAction;
	long long _buttonType;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) long long buttonType;                        //@synthesize buttonType=_buttonType - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasTapAction;                           //@synthesize hasTapAction=_hasTapAction - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_isMediaButtonEvent:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(NSDictionary *)properties;
-(void)_setEnabled:(BOOL)arg1 ;
-(long long)buttonType;
-(BOOL)hasTapAction;
-(id)_initWithButtonType:(long long)arg1 hasTapAction:(BOOL)arg2 properties:(id)arg3 ;
-(id)_initWithButtonType:(long long)arg1 ;
-(BOOL)isEqualToButton:(id)arg1 ;
@end

