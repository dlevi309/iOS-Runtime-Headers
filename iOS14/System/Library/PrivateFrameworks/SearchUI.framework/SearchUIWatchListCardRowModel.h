/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)separatorStyle;
-(void)setImage:(SFImage *)arg1 ;
-(void)setPunchout:(SFPunchout *)arg1 ;
-(id<SearchUIWatchListCardRowModelDelegate>)delegate;
-(id)punchouts;
-(void)setManager:(SearchUIWatchListCardsManager *)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isDraggable;
-(SFImage *)image;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)setDelegate:(id<SearchUIWatchListCardRowModelDelegate>)arg1 ;
-(NSString *)text;
-(void)toggleAddToUpNextWithFeedbackDelegate:(id)arg1 ;
-(SFPunchout *)punchout;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 image:(id)arg3 punchout:(id)arg4 ;
-(void)updateWithText:(id)arg1 buttonState:(long long)arg2 ;
-(long long)buttonState;
-(SearchUIWatchListCardsManager *)manager;
-(void)setButtonState:(long long)arg1 ;
-(BOOL)isTappable;
-(BOOL)hasError;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 asyncRowManager:(id)arg3 queryId:(unsigned long long)arg4 ;
-(BOOL)hasLoaded;
@end

