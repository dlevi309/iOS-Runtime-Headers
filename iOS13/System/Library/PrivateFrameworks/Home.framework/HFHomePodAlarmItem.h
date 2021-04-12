/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@protocol HFMediaProfileContainer;
@class MTAlarm, NSString;

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable> {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	MTAlarm* _alarm;
	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;                                         //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
@property (nonatomic,copy) MTAlarm * alarm;                                                    //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(MTAlarm *)alarm;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
-(NSString *)alarmIdentifier;
-(void)setAlarm:(MTAlarm *)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2 ;
@end

