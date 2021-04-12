/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@protocol SearchUIWatchListCardRowModelDelegate;
@class NSString, SFImage, SFPunchout, SearchUIWatchListCardsManager, SFWatchListCardSection;

@interface SearchUIWatchListCardRowModel : SearchUICardSectionRowModel {

	BOOL _hasLoaded;
	BOOL _hasError;
	id<SearchUIWatchListCardRowModelDelegate> _delegate;
	NSString* _text;
	SFImage* _image;
	long long _buttonState;
	SFPunchout* _punchout;
	SearchUIWatchListCardsManager* _manager;

}

@property (nonatomic,retain) SearchUIWatchListCardsManager * manager;               //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                        //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,retain) SFPunchout * punchout;                                 //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,retain) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) SFImage * image;                                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long buttonState;                                 //@synthesize buttonState=_buttonState - In the implementation block
@property (__weak) id<SearchUIWatchListCardRowModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SFWatchListCardSection * cardSection; 
@property (assign,nonatomic) BOOL hasError;                                         //@synthesize hasError=_hasError - In the implementation block
-(id<SearchUIWatchListCardRowModelDelegate>)delegate;
-(void)setDelegate:(id<SearchUIWatchListCardRowModelDelegate>)arg1 ;
-(SearchUIWatchListCardsManager *)manager;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)hasError;
-(void)setManager:(SearchUIWatchListCardsManager *)arg1 ;
-(int)separatorStyle;
-(SFPunchout *)punchout;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(BOOL)isDraggable;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4 ;
-(BOOL)isTappable;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4 ;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 ;
-(long long)buttonState;
-(void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1 ;
-(void)setButtonState:(long long)arg1 ;
@end

