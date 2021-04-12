/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHContentEditingOutputRequestOptions : NSObject {

	BOOL _asyncAdjustment;
	BOOL _onlyChangingOriginalChoice;
	long long _playbackStyle;

}

@property (assign,getter=isAsyncAdjustment,nonatomic) BOOL asyncAdjustment;                                    //@synthesize asyncAdjustment=_asyncAdjustment - In the implementation block
@property (assign,getter=isOnlyChangingOriginalChoice,nonatomic) BOOL onlyChangingOriginalChoice;              //@synthesize onlyChangingOriginalChoice=_onlyChangingOriginalChoice - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                                          //@synthesize playbackStyle=_playbackStyle - In the implementation block
-(id)description;
-(long long)playbackStyle;
-(void)setPlaybackStyle:(long long)arg1 ;
-(BOOL)isOnlyChangingOriginalChoice;
-(BOOL)isAsyncAdjustment;
-(void)setOnlyChangingOriginalChoice:(BOOL)arg1 ;
-(void)setAsyncAdjustment:(BOOL)arg1 ;
@end

