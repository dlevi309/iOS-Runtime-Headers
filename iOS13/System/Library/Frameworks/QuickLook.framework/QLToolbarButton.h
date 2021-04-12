/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class QLToolbarButtonItemRepresentation, UIAlertController, NSString, UIImage, NSArray;

@interface QLToolbarButton : NSObject <NSSecureCoding> {

	QLToolbarButtonItemRepresentation* _currentItemRepresentation;
	UIAlertController* _alertController;
	id _target;
	SEL _action;
	BOOL _useCustomView;
	BOOL _forceToNavBar;
	BOOL _selected;
	BOOL _enabled;
	BOOL _roundedSelectedIndicator;
	BOOL _disappearsOnTap;
	NSString* _identifier;
	UIImage* _image;
	NSString* _systemImageName;
	long long _systemItem;
	NSString* _title;
	NSString* _accessibilityIdentifier;
	NSArray* _options;
	unsigned long long _placement;

}

@property (readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy) UIImage * image;                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * systemImageName;              //@synthesize systemImageName=_systemImageName - In the implementation block
@property (assign) long long systemItem;                            //@synthesize systemItem=_systemItem - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * accessibilityIdentifier;                //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (copy) NSArray * options;                                 //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long placement;                    //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL useCustomView;                              //@synthesize useCustomView=_useCustomView - In the implementation block
@property (assign) BOOL forceToNavBar;                              //@synthesize forceToNavBar=_forceToNavBar - In the implementation block
@property (assign) BOOL selected;                                   //@synthesize selected=_selected - In the implementation block
@property (assign) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL roundedSelectedIndicator;                   //@synthesize roundedSelectedIndicator=_roundedSelectedIndicator - In the implementation block
@property (assign) BOOL disappearsOnTap;                            //@synthesize disappearsOnTap=_disappearsOnTap - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)options;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(long long)systemItem;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(unsigned long long)placement;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(NSString *)systemImageName;
-(void)setSystemItem:(long long)arg1 ;
-(void)setDisappearsOnTap:(BOOL)arg1 ;
-(void)setSystemImageName:(NSString *)arg1 ;
-(void)setForceToNavBar:(BOOL)arg1 ;
-(void)invalidateCurrentState;
-(BOOL)disappearsOnTap;
-(BOOL)forceToNavBar;
-(id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(CGSize)arg3 ;
-(BOOL)useCustomView;
-(BOOL)roundedSelectedIndicator;
-(void)setUseCustomView:(BOOL)arg1 ;
-(void)setRoundedSelectedIndicator:(BOOL)arg1 ;
@end

