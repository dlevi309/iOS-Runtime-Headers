/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UITabBarItemData *)_data;
-(UITabBarItemStateAppearance *)disabled;
-(id)initWithStyle:(long long)arg1 ;
-(UITabBarItemStateAppearance *)highlighted;
-(void)_describeInto:(id)arg1 ;
-(UITabBarItemStateAppearance *)selected;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(void)_setData:(id)arg1 ;
-(id)_initWithTabBarItemData:(id)arg1 ;
-(id)initWithTabBarItemAppearance:(id)arg1 ;
-(void)_updateDataTo:(id)arg1 ;
-(id)_proxyForState:(long long)arg1 ;
-(UITabBarItemStateAppearance *)normal;
-(UITabBarItemStateAppearance *)focused;
-(void)configureWithDefaultForStyle:(long long)arg1 ;
-(UITabBarAppearance *)_owningAppearance;
-(void)_setOwningAppearance:(id)arg1 ;
@end

