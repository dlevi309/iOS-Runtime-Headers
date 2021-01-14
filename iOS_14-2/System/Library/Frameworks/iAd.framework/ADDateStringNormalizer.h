/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/


@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject {

	NSRegularExpression* _regularExpression;

}

@property (nonatomic,retain) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
+(id)formatter;
+(id)dateFromString:(id)arg1 ;
+(id)normalizers;
+(id)relativeDateFormatStringForDate:(id)arg1 ;
-(NSRegularExpression *)regularExpression;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
-(id)normalize:(id)arg1 ;
@end

