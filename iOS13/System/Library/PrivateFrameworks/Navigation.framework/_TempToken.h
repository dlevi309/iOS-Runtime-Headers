/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/GEOServerFormatToken.h>

@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource, GEOServerFormatTokenCountdownValue;
@class NSString, NSArray;

@interface _TempToken : NSObject <GEOServerFormatToken> {

	unsigned _value1;
	unsigned _value2;
	long long _type;
	NSString* _token;
	NSArray* _value3s;
	NSString* _stringValue;
	id<GEOServerFormatTokenPriceValue> _priceValue;
	id<GEOTransitArtworkDataSource> _artworkValue;
	NSArray* _timeStampValues;
	id<GEOServerFormatTokenCountdownValue> _countdownValue;

}

@property (assign,nonatomic) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * token;                                                   //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned value1;                                                    //@synthesize value1=_value1 - In the implementation block
@property (assign,nonatomic) unsigned value2;                                                    //@synthesize value2=_value2 - In the implementation block
@property (nonatomic,retain) NSString * stringValue;                                             //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) id<GEOServerFormatTokenPriceValue> priceValue;                      //@synthesize priceValue=_priceValue - In the implementation block
@property (nonatomic,retain) id<GEOTransitArtworkDataSource> artworkValue;                       //@synthesize artworkValue=_artworkValue - In the implementation block
@property (nonatomic,retain) NSArray * timeStampValues;                                          //@synthesize timeStampValues=_timeStampValues - In the implementation block
@property (nonatomic,retain) id<GEOServerFormatTokenCountdownValue> countdownValue;              //@synthesize countdownValue=_countdownValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * value3s;                                                //@synthesize value3s=_value3s - In the implementation block
-(NSString *)token;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(id<GEOServerFormatTokenCountdownValue>)countdownValue;
-(void)setValue2:(unsigned)arg1 ;
-(void)setValue1:(unsigned)arg1 ;
-(void)setPriceValue:(id<GEOServerFormatTokenPriceValue>)arg1 ;
-(void)setArtworkValue:(id<GEOTransitArtworkDataSource>)arg1 ;
-(void)setTimeStampValues:(NSArray *)arg1 ;
-(void)setCountdownValue:(id<GEOServerFormatTokenCountdownValue>)arg1 ;
@end

