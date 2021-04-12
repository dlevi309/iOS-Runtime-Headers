/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CLKDevice, NSArray;

@interface NTKInfinityDataSource : NSObject {

	CLKDevice* _device;
	NSArray* _listings;
	long long _numberOfTotalActions;
	long long _numberOfTotalMagicMoments;

}

@property (assign,nonatomic) long long numberOfTotalActions;                   //@synthesize numberOfTotalActions=_numberOfTotalActions - In the implementation block
@property (assign,nonatomic) long long numberOfTotalMagicMoments;              //@synthesize numberOfTotalMagicMoments=_numberOfTotalMagicMoments - In the implementation block
+(id)buzzColor;
+(id)woodyColor;
+(id)jessieColor;
+(id)ballColor;
+(id)hangGliderColor;
+(id)bullseyeColor;
+(id)supportingCastColor;
+(id)rexColor;
+(id)hammColor;
+(id)alienColor;
+(id)spotlightColor;
-(id)initForDevice:(id)arg1 ;
-(id)listingsOfTypes:(id)arg1 withAttributes:(id)arg2 recentlyUsed:(id)arg3 ;
-(id)listingsForCharacter:(unsigned long long)arg1 ofTypes:(id)arg2 withAttributes:(id)arg3 recentlyUsed:(id)arg4 ;
-(long long)numberOfTotalMagicMoments;
-(long long)numberOfTotalActions;
-(id)listingsForCharacter:(unsigned long long)arg1 ;
-(void)_loadCharacters;
-(void)_countListings;
-(void)setNumberOfTotalActions:(long long)arg1 ;
-(void)setNumberOfTotalMagicMoments:(long long)arg1 ;
@end
