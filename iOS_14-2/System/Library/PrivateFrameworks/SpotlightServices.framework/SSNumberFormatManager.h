/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSNumberFormatter, NSByteCountFormatter;

@interface SSNumberFormatManager : NSObject {

	NSNumberFormatter* _numberFormatter;
	NSByteCountFormatter* _byteCountFormatter;

}

@property (retain) NSNumberFormatter * numberFormatter;                    //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (retain) NSByteCountFormatter * byteCountFormatter;              //@synthesize byteCountFormatter=_byteCountFormatter - In the implementation block
+(void)initialize;
+(id)stringFromByteCount:(long long)arg1 ;
+(id)stringFromInt:(int)arg1 withMinimumDigits:(unsigned long long)arg2 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)init;
-(void)setByteCountFormatter:(NSByteCountFormatter *)arg1 ;
-(NSByteCountFormatter *)byteCountFormatter;
@end

