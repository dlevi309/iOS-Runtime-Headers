/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _UIBarButtonItemAppearanceChangeObserver;
@class _UIBarButtonItemData, UIBarButtonItemStateAppearance;

@interface UIBarButtonItemAppearance : NSObject <NSCopying, NSSecureCoding> {

	id<_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
	_UIBarButtonItemData* _data;
	UIBarButtonItemStateAppearance* _states[4];

}

@property (nonatomic,readonly) _UIBarButtonItemData * _data;                                                                              //@synthesize data=_data - In the implementation block
@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<_UIBarButtonItemAppearanceChangeObserver> _changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (setter=_setFallback:,nonatomic,retain) id<_UIBarButtonItemDataFallback> _fallback; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * normal; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * highlighted; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * disabled; 
@property (nonatomic,readonly) UIBarButtonItemStateAppearance * focused; 
+(BOOL)supportsSecureCoding;
-(void)_setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(void)_resetBackIndicatorImages;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(void)_setChangeObserver:(id)arg1 ;
-(UIBarButtonItemStateAppearance *)highlighted;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setFallback:(id)arg1 ;
-(UIBarButtonItemStateAppearance *)normal;
-(_UIBarButtonItemData *)_data;
-(void)_setData:(id)arg1 ;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(id)description;
-(id)copy;
-(void)_describeInto:(id)arg1 ;
-(void)configureWithDefaultForStyle:(long long)arg1 ;
-(void)_updateDataTo:(id)arg1 signal:(BOOL)arg2 ;
-(UIBarButtonItemStateAppearance *)focused;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg1 ;
-(id)_proxyForState:(long long)arg1 ;
-(id<_UIBarButtonItemAppearanceChangeObserver>)_changeObserver;
-(id<_UIBarButtonItemDataFallback>)_fallback;
-(UIBarButtonItemStateAppearance *)disabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBarButtonItemAppearance:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

