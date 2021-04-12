/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_UIBarButtonItemData *)_data;
-(UIBarButtonItemStateAppearance *)disabled;
-(id)initWithStyle:(long long)arg1 ;
-(UIBarButtonItemStateAppearance *)highlighted;
-(void)_describeInto:(id)arg1 ;
-(id<_UIBarButtonItemAppearanceChangeObserver>)_changeObserver;
-(void)_setChangeObserver:(id)arg1 ;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(void)_setData:(id)arg1 ;
-(id)_proxyForState:(long long)arg1 ;
-(UIBarButtonItemStateAppearance *)normal;
-(UIBarButtonItemStateAppearance *)focused;
-(void)configureWithDefaultForStyle:(long long)arg1 ;
-(id)initWithBarButtonItemAppearance:(id)arg1 ;
-(void)_updateDataTo:(id)arg1 signal:(BOOL)arg2 ;
-(id<_UIBarButtonItemDataFallback>)_fallback;
-(void)_setFallback:(id)arg1 ;
-(void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)arg1 ;
-(void)_setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2 ;
-(void)_resetBackIndicatorImages;
@end

