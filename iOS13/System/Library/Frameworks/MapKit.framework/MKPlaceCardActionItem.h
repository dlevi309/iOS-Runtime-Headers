/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	MKPlaceCardActionItem* _selectedItem;
	id _value;

}

@property (nonatomic,copy,readonly) NSString * displayString;                   //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,copy) NSString * glyph;                                    //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                              //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) NSArray * urlStrings;                            //@synthesize urlStrings=_urlStrings - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;               //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * selectedItem;              //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) id value;                                          //@synthesize value=_value - In the implementation block
-(unsigned long long)type;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSString *)glyph;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)setSelectedItem:(MKPlaceCardActionItem *)arg1 ;
-(MKPlaceCardActionItem *)selectedItem;
-(NSString *)displayString;
-(void)setGlyph:(NSString *)arg1 ;
-(_MKMapItemAttribution *)attribution;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 ;
-(id)initWithType:(unsigned long long)arg1 displayString:(id)arg2 enabled:(BOOL)arg3 urlStrings:(id)arg4 attribution:(id)arg5 ;
-(NSArray *)urlStrings;
@end

