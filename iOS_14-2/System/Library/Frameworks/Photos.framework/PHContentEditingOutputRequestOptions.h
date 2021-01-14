/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHContentEditingOutputRequestOptions : NSObject {

	BOOL _asyncAdjustment;
	BOOL _onlyChangingOriginalChoice;
	BOOL _preferHEICForRenderedImages;
	long long _playbackStyle;

}

@property (assign,getter=isAsyncAdjustment,nonatomic) BOOL asyncAdjustment;                                    //@synthesize asyncAdjustment=_asyncAdjustment - In the implementation block
@property (assign,getter=isOnlyChangingOriginalChoice,nonatomic) BOOL onlyChangingOriginalChoice;              //@synthesize onlyChangingOriginalChoice=_onlyChangingOriginalChoice - In the implementation block
@property (assign,nonatomic) long long playbackStyle;                                                          //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (assign,nonatomic) BOOL preferHEICForRenderedImages;                                                 //@synthesize preferHEICForRenderedImages=_preferHEICForRenderedImages - In the implementation block
-(BOOL)isOnlyChangingOriginalChoice;
-(BOOL)isAsyncAdjustment;
-(BOOL)preferHEICForRenderedImages;
-(void)setAsyncAdjustment:(BOOL)arg1 ;
-(void)setOnlyChangingOriginalChoice:(BOOL)arg1 ;
-(void)setPlaybackStyle:(long long)arg1 ;
-(void)setPreferHEICForRenderedImages:(BOOL)arg1 ;
-(id)description;
-(long long)playbackStyle;
@end

