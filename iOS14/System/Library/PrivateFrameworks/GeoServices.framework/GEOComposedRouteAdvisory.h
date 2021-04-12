/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOServerFormattedString;
@class NSArray;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding> {

	id<GEOServerFormattedString> _inlineTitle;
	id<GEOServerFormattedString> _cardTitle;
	id<GEOServerFormattedString> _cardDetails;
	BOOL _alwaysClickable;
	NSArray* _routeIncidents;

}

@property (nonatomic,retain) id<GEOServerFormattedString> inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> cardTitle;                //@synthesize cardTitle=_cardTitle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> cardDetails;              //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,retain) NSArray * routeIncidents;                              //@synthesize routeIncidents=_routeIncidents - In the implementation block
@property (assign,nonatomic) BOOL alwaysClickable;                                  //@synthesize alwaysClickable=_alwaysClickable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setInlineTitle:(id<GEOServerFormattedString>)arg1 ;
-(id<GEOServerFormattedString>)cardDetails;
-(void)setCardDetails:(id<GEOServerFormattedString>)arg1 ;
-(BOOL)alwaysClickable;
-(void)setAlwaysClickable:(BOOL)arg1 ;
-(void)setRouteIncidents:(NSArray *)arg1 ;
-(id<GEOServerFormattedString>)cardTitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithMessage:(id)arg1 incidents:(id)arg2 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2 ;
-(id<GEOServerFormattedString>)inlineTitle;
-(void)setCardTitle:(id<GEOServerFormattedString>)arg1 ;
-(id)description;
-(NSArray *)routeIncidents;
-(id)initWithCoder:(id)arg1 ;
@end

