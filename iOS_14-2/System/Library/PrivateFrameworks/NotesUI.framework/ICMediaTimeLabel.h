/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ICMediaTimeFormatter *)formatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFormatter:(ICMediaTimeFormatter *)arg1 ;
-(void)commonInit;
-(id)initWithCoder:(id)arg1 ;
-(void)setMediaTimeValue:(ICMediaTime *)arg1 ;
-(ICMediaTime *)mediaTimeValue;
@end

