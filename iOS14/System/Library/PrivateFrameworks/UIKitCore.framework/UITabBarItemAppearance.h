/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UITabBarItemStateAppearance, _UITabBarItemData, UITabBarAppearance;

@interface UITabBarItemAppearance : NSObject <NSCopying, NSSecureCoding> {

	UITabBarItemStateAppearance* _states[5];
	_UITabBarItemData* _data;
	UITabBarAppearance* _owningAppearance;

}

@property (setter=_setData:,nonatomic,retain) _UITabBarItemData * _data;                                              //@synthesize data=_data - In the implementation block
@property (assign,setter=_setOwningAppearance:,nonatomic,__weak) UITabBarAppearance * _owningAppearance;              //@synthesize owningAppearance=_owningAppearance - In the implementation block
@property (nonatomic,readonly) UITabBarItemStateAppearance * highlighted; 
@property (nonatomic,readonly) UITabBarItemStateAppearance * normal; 
@property (nonatomic,readonly) UITabBarItemStateAppearance * selected; 
@property (nonatomic,readonly) UITabBarItemStateAppearance * disabled; 
@property (nonatomic,readonly) UITabBarItemStateAppearance * focused; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(UITabBarItemStateAppearance *)highlighted;
-(void)encodeWithCoder:(id)arg1 ;
-(UITabBarItemStateAppearance *)normal;
-(_UITabBarItemData *)_data;
-(UITabBarItemStateAppearance *)selected;
-(void)_setData:(id)arg1 ;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(id)description;
-(id)copy;
-(void)_describeInto:(id)arg1 ;
-(void)configureWithDefaultForStyle:(long long)arg1 ;
-(UITabBarItemStateAppearance *)focused;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateDataTo:(id)arg1 ;
-(id)_proxyForState:(long long)arg1 ;
-(UITabBarAppearance *)_owningAppearance;
-(id)_initWithTabBarItemData:(id)arg1 ;
-(id)initWithTabBarItemAppearance:(id)arg1 ;
-(void)_setOwningAppearance:(id)arg1 ;
-(UITabBarItemStateAppearance *)disabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

