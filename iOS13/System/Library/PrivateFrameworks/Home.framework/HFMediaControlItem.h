/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFControlItem.h>
#import <libobjc.A.dylib/HFTogglableControlItem.h>

@protocol HFMediaValueSource, HFMediaProfileContainer;
@class HFMediaActionSetting, NSString;

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem> {

	id<HFMediaValueSource> _mediaValueSource;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	long long _mediaAccessoryItemType;
	HFMediaActionSetting* _mediaActionSetting;

}

@property (nonatomic,readonly) id<HFMediaValueSource> mediaValueSource;                        //@synthesize mediaValueSource=_mediaValueSource - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) long long mediaAccessoryItemType;                               //@synthesize mediaAccessoryItemType=_mediaAccessoryItemType - In the implementation block
@property (nonatomic,retain) HFMediaActionSetting * mediaActionSetting;                        //@synthesize mediaActionSetting=_mediaActionSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(long long)sortPriority;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(id)writeValue:(id)arg1 ;
-(id)toggleValue;
-(id)readValueAndPopulateStandardResults;
-(id)writePrimaryState:(long long)arg1 ;
-(id)togglePrimaryState;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)normalizedValueForValue:(id)arg1 ;
-(id<HFMediaValueSource>)mediaValueSource;
-(long long)mediaAccessoryItemType;
-(id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 mediaAccessoryItemType:(long long)arg3 displayResults:(id)arg4 ;
-(HFMediaActionSetting *)mediaActionSetting;
-(void)setMediaActionSetting:(HFMediaActionSetting *)arg1 ;
-(long long)toggledSceneStateFromPrimaryState:(long long)arg1 ;
-(long long)mapToHMMediaPlaybackState:(long long)arg1 ;
@end

