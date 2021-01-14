/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSString, NSArray, _MKMapItemAttribution, UIColor;

@interface MKPlaceCardActionItem : NSObject {

	BOOL _enabled;
	BOOL _selected;
	NSString* _displayString;
	unsigned long long _type;
	NSArray* _urlStrings;
	_MKMapItemAttribution* _attribution;
	NSString* _glyph;
	UIColor* _glyphColor;
	UIColor* _backgroundColor;
	MKPlaceCardActionItem* _selectedItem;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * displayString;                   //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * glyph;                                    //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                              //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSArray * urlStrings;                            //@synthesize urlStrings=_urlStrings - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * selectedItem;              //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
-(BOOL)enabled;
-(NSString *)glyph;
-(NSString *)displayString;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIColor *)glyphColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(UIColor *)backgroundColor;
-(void)setValue:(id)arg1 ;
-(void)setGlyph:(NSString *)arg1 ;
-(_MKMapItemAttribution *)attribution;
-(MKPlaceCardActionItem *)selectedItem;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 ;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 urlStrings:(id)arg4 attribution:(id)arg5 ;
-(NSArray *)urlStrings;
-(void)setSelectedItem:(MKPlaceCardActionItem *)arg1 ;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(id)value;
@end

