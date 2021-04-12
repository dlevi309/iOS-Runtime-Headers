/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFCharacteristicValueSource;
@class NSArray;

@interface HFDemoModeAccessoryManager : NSObject {

	id<HFCharacteristicValueSource> _valueSource;
	NSArray* _demoAccessories;

}

@property (nonatomic,retain) NSArray * demoAccessories;                                  //@synthesize demoAccessories=_demoAccessories - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
+(id)sharedManager;
+(id)accessoryProfileName:(id)arg1 ;
+(BOOL)isInternalAccessoryType:(id)arg1 ;
+(BOOL)isValidExternalType:(id)arg1 ;
+(id)profileURLForDemoModeAccessoryName:(id)arg1 ;
+(id)configurationProfileFromAccessoryType:(id)arg1 ;
+(id)accessoryWithContentsOfDictionary:(id)arg1 forHome:(id)arg2 ;
+(id)demoModeDirectoryURL;
+(id)demoURLWithCameraName:(id)arg1 fileName:(id)arg2 extension:(id)arg3 ;
+(id)_cameraClipForProfile:(id)arg1 url:(id)arg2 duration:(double)arg3 ;
+(id)_clipStartDateFromComponents:(id)arg1 today:(id)arg2 ;
+(id)_eventsFromString:(id)arg1 startDate:(id)arg2 ;
+(BOOL)isPressDemoModeEnabled;
+(id)imageIconDescriptorFromDictionary:(id)arg1 ;
+(id)demoSnapshotURLForCameraName:(id)arg1 ;
+(id)demoLiveStreamURLForCameraName:(id)arg1 ;
+(id)clipsForCameraProfile:(id)arg1 ;
-(id)accessories;
-(id)initWithNullValueSource:(id)arg1 ;
-(void)saveAccessories;
-(NSArray *)demoAccessories;
-(void)dispatchUpdateMessageForAccessory:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(void)setDemoAccessories:(NSArray *)arg1 ;
@end

