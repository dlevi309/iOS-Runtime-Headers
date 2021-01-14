/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class UIScreen, NSString, UIViewController, UIWindow;

@interface PUAirPlayScreen : NSObject <PXSettingsKeyObserver> {

	UIScreen* _screen;
	NSString* _identifier;
	unsigned long long _type;
	UIViewController* _rootViewController;
	UIWindow* __window;
	CGSize _size;

}

@property (setter=_setScreen:,nonatomic,retain) UIScreen * screen;                      //@synthesize screen=_screen - In the implementation block
@property (setter=_setIdentifier:,nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,setter=_setType:,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (setter=_setWindow:,nonatomic,retain) UIWindow * _window;                     //@synthesize _window=__window - In the implementation block
@property (nonatomic,readonly) NSString * _typeName; 
@property (nonatomic,readonly) unsigned long long placeholderType; 
@property (nonatomic,retain) UIViewController * rootViewController;                     //@synthesize rootViewController=_rootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setSize:(CGSize)arg1 ;
-(void)_setScreen:(id)arg1 ;
-(id)init;
-(CGSize)size;
-(NSString *)debugDescription;
-(void)_updateWindow;
-(BOOL)isEqualToAirPlayScreen:(id)arg1 ;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(NSString *)description;
-(unsigned long long)placeholderType;
-(id)initWithScreen:(id)arg1 ;
-(UIViewController *)rootViewController;
-(unsigned long long)type;
-(void)_setType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)_setWindow:(id)arg1 ;
-(NSString *)_typeName;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(UIScreen *)screen;
-(void)_setIdentifier:(id)arg1 ;
-(NSString *)identifier;
-(UIWindow *)_window;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

