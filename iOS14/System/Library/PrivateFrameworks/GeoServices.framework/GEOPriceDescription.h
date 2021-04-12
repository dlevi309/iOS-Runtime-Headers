/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPriceDescription, NSString;

@interface GEOPriceDescription : NSObject {

	GEOPDPriceDescription* _geoPriceDescription;

}

@property (nonatomic,retain) GEOPDPriceDescription * geoPriceDescription;              //@synthesize geoPriceDescription=_geoPriceDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,readonly) NSString * priceDescription; 
-(NSString *)priceDescription;
-(BOOL)hasPriceDescription;
-(GEOPDPriceDescription *)geoPriceDescription;
-(void)setGeoPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(id)initWithGEOPDPriceDescription:(id)arg1 ;
@end

