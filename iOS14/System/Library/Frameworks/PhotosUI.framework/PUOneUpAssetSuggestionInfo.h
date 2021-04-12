/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSProgress, PUOneUpSuggestion, PXContextualNotification;

@interface PUOneUpAssetSuggestionInfo : NSObject {

	long long _state;
	NSProgress* _progress;
	PUOneUpSuggestion* _suggestion;
	PXContextualNotification* _contextualNotification;

}

@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) PUOneUpSuggestion * suggestion;                                 //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) PXContextualNotification * contextualNotification;              //@synthesize contextualNotification=_contextualNotification - In the implementation block
-(NSProgress *)progress;
-(PUOneUpSuggestion *)suggestion;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)setSuggestion:(PUOneUpSuggestion *)arg1 ;
-(void)setContextualNotification:(PXContextualNotification *)arg1 ;
-(PXContextualNotification *)contextualNotification;
@end

