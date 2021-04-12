/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2 ;
-(id)overrideBlock;
-(void)setOverrideBlock:(id)arg1 ;
@end

