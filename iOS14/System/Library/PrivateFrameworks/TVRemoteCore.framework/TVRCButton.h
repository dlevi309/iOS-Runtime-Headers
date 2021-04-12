/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)properties;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setEnabled:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(long long)buttonType;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTapAction;
-(id)_initWithButtonType:(long long)arg1 ;
-(id)_initWithButtonType:(long long)arg1 hasTapAction:(BOOL)arg2 properties:(id)arg3 ;
-(BOOL)isEqualToButton:(id)arg1 ;
@end

