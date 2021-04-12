/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
*/


@class NSArray, NSString;

@interface VOSGestureCategory : NSObject {

	NSArray* _gestures;
	NSString* _localizedCategoryName;

}

@property (nonatomic,retain) NSArray * gestures;                            //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
+(id)oneFingerTaps;
+(id)twoFingerTaps;
+(id)threeFingerTaps;
+(id)fourFingerTaps;
+(id)fiveFingerTaps;
+(id)oneFingerFlicks;
+(id)twoFingerFlicks;
+(id)threeFingerFlicks;
+(id)fourFingerFlicks;
+(id)twoFingerRotates;
+(id)twoFingerScrubs;
+(id)oneFingerTapAndHolds;
+(id)twoFingerTapAndHolds;
+(id)threeFingerTapAndHolds;
+(id)threeFingerDoubleTapHoldAndFlicks;
+(id)backTaps;
+(id)allCategories;
+(BOOL)isFlickGesture:(id)arg1 ;
+(BOOL)isTapGesture:(id)arg1 ;
+(BOOL)isRotateGesture:(id)arg1 ;
+(BOOL)isScrubGesture:(id)arg1 ;
+(BOOL)isTapAndHoldGesture:(id)arg1 ;
-(id)init;
-(NSArray *)gestures;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithGestures:(id)arg1 localizedCategoryName:(id)arg2 ;
-(void)setGestures:(NSArray *)arg1 ;
-(BOOL)containsGesture:(id)arg1 ;
@end

