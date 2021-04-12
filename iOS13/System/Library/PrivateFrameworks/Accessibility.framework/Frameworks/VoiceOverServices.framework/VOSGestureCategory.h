/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
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
+(id)allCategories;
+(BOOL)isFlickGesture:(id)arg1 ;
+(BOOL)isTapGesture:(id)arg1 ;
+(BOOL)isRotateGesture:(id)arg1 ;
+(BOOL)isScrubGesture:(id)arg1 ;
+(BOOL)isTapAndHoldGesture:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)gestures;
-(NSString *)localizedCategoryName;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)initWithGestures:(id)arg1 localizedCategoryName:(id)arg2 ;
-(void)setGestures:(NSArray *)arg1 ;
-(BOOL)containsGesture:(id)arg1 ;
@end

