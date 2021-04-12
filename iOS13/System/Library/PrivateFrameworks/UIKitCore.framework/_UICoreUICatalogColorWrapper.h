/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)bundle;
-(NSString *)bundleID;
-(UIColor *)color;
-(id)colorCache;
-(id)_uikit_valueForTraitCollection:(id)arg1 ;
-(BOOL)isEqualToCoreUICatalogColor:(id)arg1 ;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 fallbackColor:(id)arg3 ;
-(id)nibLoadingBundle;
-(id)cachedColorForDisplayGamut:(long long)arg1 ;
-(void)setCachedColor:(id)arg1 forDisplayGamut:(long long)arg2 ;
-(CGColorRef)cgColorForTraitCollection:(id)arg1 ;
-(BOOL)_uikit_variesByTraitCollections;
-(UIColor *)fallbackColor;
@end

