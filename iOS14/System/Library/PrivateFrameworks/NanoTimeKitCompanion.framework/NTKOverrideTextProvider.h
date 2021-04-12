/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <ClockKit/CLKTextProvider.h>

@class NSString;

@interface NTKOverrideTextProvider : CLKTextProvider {

	NSString* _text;
	/*^block*/id _overrideBlock;

}

@property (nonatomic,copy) id overrideBlock;              //@synthesize overrideBlock=_overrideBlock - In the implementation block
@property (nonatomic,copy) NSString * text;               //@synthesize text=_text - In the implementation block
+(id)textProviderWithText:(id)arg1 overrideBlock:(/*^block*/id)arg2 ;
+(id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 weight:(double)arg3 ;
+(id)_dashTrackingTextProviderWithDashes:(id)arg1 tracking:(double)arg2 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)overrideBlock;
-(void)setOverrideBlock:(id)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
@end

