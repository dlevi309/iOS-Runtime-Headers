/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSNumber, UIView, _UILegibilitySettings;

@interface CSComponent : NSObject <NSCopying> {

	BOOL _hidden;
	long long _type;
	unsigned long long _properties;
	NSString* _identifier;
	long long _priority;
	long long _flag;
	NSString* _string;
	UIColor* _color;
	NSNumber* _value;
	UIView* _view;
	_UILegibilitySettings* _legibilitySettings;
	double _alpha;
	CGPoint _offset;

}

@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                           //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long flag;                                          //@synthesize flag=_flag - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                          //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) NSString * string;                                         //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * color;                                         //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIView * view;                                           //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double alpha;                                            //@synthesize alpha=_alpha - In the implementation block
+(id)dateView;
+(id)statusBar;
+(id)scalableContent;
+(id)statusBarGradient;
+(id)wallpaper;
+(id)statusBarBackground;
+(id)proudLock;
+(id)tinting;
+(id)whitePoint;
+(id)slideableContent;
+(id)controlCenterGrabber;
+(id)quickActions;
+(id)footerStatusLabel;
+(id)pageControl;
+(id)pageContent;
+(id)homeAffordance;
+(id)footerCallToActionLabel;
+(id)componentWithType:(long long)arg1 ;
+(id)poseidon;
-(id)succinctDescription;
-(unsigned long long)properties;
-(BOOL)isHidden;
-(id)init;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(UIColor *)color;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)legibilitySettings:(id)arg1 ;
-(id)string:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)hasValueForProperty:(unsigned long long)arg1 ;
-(void)setValue:(NSNumber *)arg1 ;
-(CGPoint)offset;
-(id)description;
-(UIView *)view;
-(void)setColor:(UIColor *)arg1 ;
-(id)flag:(long long)arg1 ;
-(long long)flag;
-(void)resetAllProperties;
-(_UILegibilitySettings *)legibilitySettings;
-(id)view:(id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(void)setOffset:(CGPoint)arg1 ;
-(NSString *)string;
-(id)hidden:(BOOL)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFlag:(long long)arg1 ;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)value:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)resetProperties:(unsigned long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)identifier:(id)arg1 ;
-(id)offset:(CGPoint)arg1 ;
-(id)priority:(long long)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(NSNumber *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

