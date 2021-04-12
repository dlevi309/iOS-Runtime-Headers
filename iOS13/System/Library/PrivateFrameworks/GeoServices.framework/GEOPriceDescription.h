/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithGEOPDPriceDescription:(id)arg1 ;
-(GEOPDPriceDescription *)geoPriceDescription;
-(void)setGeoPriceDescription:(GEOPDPriceDescription *)arg1 ;
@end

