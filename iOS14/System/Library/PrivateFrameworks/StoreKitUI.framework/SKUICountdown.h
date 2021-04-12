/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIArtworkProviding;
@class NSURL, NSDate, NSString, UIColor;

@interface SKUICountdown : NSObject {

	BOOL _isLoaded;
	BOOL _flapped;
	long long _type;
	NSURL* _URL;
	NSDate* _endDate;
	unsigned long long _dateFormat;
	NSDate* _startDate;
	long long _initialValue;
	long long _finalValue;
	long long _rate;
	NSString* _numberFormat;
	UIColor* _fontColor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	id<SKUIArtworkProviding> _artworkProvider;
	id<SKUIArtworkProviding> _endArtworkProvider;

}

@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned long long dateFormat;                            //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long initialValue;                                   //@synthesize initialValue=_initialValue - In the implementation block
@property (assign,nonatomic) long long finalValue;                                     //@synthesize finalValue=_finalValue - In the implementation block
@property (assign,nonatomic) long long rate;                                           //@synthesize rate=_rate - In the implementation block
@property (nonatomic,copy) NSString * numberFormat;                                    //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,copy) UIColor * fontColor;                                        //@synthesize fontColor=_fontColor - In the implementation block
@property (nonatomic,copy) UIColor * flapTopColor;                                     //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,copy) UIColor * flapBottomColor;                                  //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (assign,getter=isFlapped,nonatomic) BOOL flapped;                            //@synthesize flapped=_flapped - In the implementation block
@property (nonatomic,retain) id<SKUIArtworkProviding> artworkProvider;                 //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,retain) id<SKUIArtworkProviding> endArtworkProvider;              //@synthesize endArtworkProvider=_endArtworkProvider - In the implementation block
-(void)updateWithDictionary:(id)arg1 ;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)initialValue;
-(NSDate *)startDate;
-(unsigned long long)dateFormat;
-(void)setURL:(NSURL *)arg1 ;
-(void)setRate:(long long)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)rate;
-(void)setDateFormat:(unsigned long long)arg1 ;
-(long long)type;
-(NSURL *)URL;
-(void)setFontColor:(UIColor *)arg1 ;
-(void)setInitialValue:(long long)arg1 ;
-(BOOL)isLoaded;
-(UIColor *)fontColor;
-(NSString *)numberFormat;
-(id<SKUIArtworkProviding>)artworkProvider;
-(BOOL)isFlapped;
-(UIColor *)flapTopColor;
-(UIColor *)flapBottomColor;
-(long long)finalValue;
-(id)initWithCountdownDictionary:(id)arg1 ;
-(void)setFlapped:(BOOL)arg1 ;
-(void)setNumberFormat:(NSString *)arg1 ;
-(void)setFinalValue:(long long)arg1 ;
-(void)setFlapTopColor:(UIColor *)arg1 ;
-(void)setFlapBottomColor:(UIColor *)arg1 ;
-(void)setArtworkProvider:(id<SKUIArtworkProviding>)arg1 ;
-(void)setEndArtworkProvider:(id<SKUIArtworkProviding>)arg1 ;
-(id<SKUIArtworkProviding>)endArtworkProvider;
@end

