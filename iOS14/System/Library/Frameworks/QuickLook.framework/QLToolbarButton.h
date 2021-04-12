/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _useInternalSymbolImage;
	BOOL _forceToNavBar;
	BOOL _selected;
	BOOL _enabled;
	BOOL _roundedSelectedIndicator;
	BOOL _disappearsOnTap;
	NSString* _identifier;
	UIImage* _image;
	NSString* _symbolImageName;
	long long _systemItem;
	NSString* _title;
	NSString* _accessibilityIdentifier;
	NSArray* _options;
	unsigned long long _placement;

}

@property (readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (copy) UIImage * image;                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * symbolImageName;              //@synthesize symbolImageName=_symbolImageName - In the implementation block
@property (assign) long long systemItem;                            //@synthesize systemItem=_systemItem - In the implementation block
@property (copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * accessibilityIdentifier;                //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (copy) NSArray * options;                                 //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long placement;                    //@synthesize placement=_placement - In the implementation block
@property (assign) BOOL useInternalSymbolImage;                     //@synthesize useInternalSymbolImage=_useInternalSymbolImage - In the implementation block
@property (assign) BOOL forceToNavBar;                              //@synthesize forceToNavBar=_forceToNavBar - In the implementation block
@property (assign) BOOL selected;                                   //@synthesize selected=_selected - In the implementation block
@property (assign) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL roundedSelectedIndicator;                   //@synthesize roundedSelectedIndicator=_roundedSelectedIndicator - In the implementation block
@property (assign) BOOL disappearsOnTap;                            //@synthesize disappearsOnTap=_disappearsOnTap - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)enabled;
-(unsigned long long)placement;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)setDisappearsOnTap:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPlacement:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)options;
-(BOOL)useInternalSymbolImage;
-(id)_barButtonImage;
-(BOOL)roundedSelectedIndicator;
-(void)setUseInternalSymbolImage:(BOOL)arg1 ;
-(void)setRoundedSelectedIndicator:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(UIImage *)image;
-(BOOL)selected;
-(void)setForceToNavBar:(BOOL)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(NSString *)symbolImageName;
-(void)setSymbolImageName:(NSString *)arg1 ;
-(long long)systemItem;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)accessibilityIdentifier;
-(void)invalidateCurrentState;
-(BOOL)disappearsOnTap;
-(BOOL)forceToNavBar;
-(id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(CGSize)arg3 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setSystemItem:(long long)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

