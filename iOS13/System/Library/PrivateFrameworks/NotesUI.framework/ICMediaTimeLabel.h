/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UILabel.h>

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel {

	ICMediaTime* _mediaTimeValue;
	ICMediaTimeFormatter* _formatter;

}

@property (nonatomic,retain) ICMediaTimeFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,copy) ICMediaTime * mediaTimeValue;                    //@synthesize mediaTimeValue=_mediaTimeValue - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(ICMediaTimeFormatter *)formatter;
-(void)setFormatter:(ICMediaTimeFormatter *)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMediaTimeValue:(ICMediaTime *)arg1 ;
-(ICMediaTime *)mediaTimeValue;
@end

