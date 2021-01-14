/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, UIColor;

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding> {

	NSString* _nibLoadingBundleID;
	NSMutableDictionary* _colorCache;
	BOOL _hasLoggedFailure;
	NSString* _name;
	NSString* _bundleID;
	UIColor* _fallbackColor;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) UIColor * fallbackColor;              //@synthesize fallbackColor=_fallbackColor - In the implementation block
@property (nonatomic,readonly) UIColor * color; 
-(id)bundle;
-(UIColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)bundleID;
-(id)colorCache;
-(unsigned long long)hash;
-(UIColor *)fallbackColor;
-(id)initWithCoder:(id)arg1 ;
-(id)nibLoadingBundle;
-(BOOL)isEqualToCoreUICatalogColor:(id)arg1 ;
-(id)_uikit_valueForTraitCollection:(id)arg1 ;
-(id)cachedColorForDisplayGamut:(long long)arg1 ;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3 ;
-(void)setCachedColor:(id)arg1 forDisplayGamut:(long long)arg2 ;
-(CGColorRef)cgColorForTraitCollection:(id)arg1 ;
-(BOOL)_uikit_variesByTraitCollections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

