/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/TUICandidateViewState.h>

@protocol TUICandidateViewStyle;
@class NSString;

@interface CACCorrectionsCandidateState : NSObject <TUICandidateViewState> {

	BOOL _hasBackdrop;
	BOOL _candidateNumberEnabled;
	id<TUICandidateViewStyle> _style;
	id<TUICandidateViewStyle> _disambiguationStyle;
	long long _primaryGridRowType;
	long long _disambiguationGridRowType;
	long long _disambiguationGridPosition;
	long long _sortControlPosition;
	long long _inlineTextViewPosition;
	long long _arrowButtonPosition;
	long long _arrowButtonDirection;
	double _yOffset;
	double _additionalHeight;
	unsigned long long _borders;
	CGPoint _arrowButtonOffset;

}

@property (nonatomic,retain) id<TUICandidateViewStyle> style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) id<TUICandidateViewStyle> disambiguationStyle;              //@synthesize disambiguationStyle=_disambiguationStyle - In the implementation block
@property (assign,nonatomic) long long primaryGridRowType;                               //@synthesize primaryGridRowType=_primaryGridRowType - In the implementation block
@property (assign,nonatomic) long long disambiguationGridRowType;                        //@synthesize disambiguationGridRowType=_disambiguationGridRowType - In the implementation block
@property (assign,nonatomic) long long disambiguationGridPosition;                       //@synthesize disambiguationGridPosition=_disambiguationGridPosition - In the implementation block
@property (assign,nonatomic) long long sortControlPosition;                              //@synthesize sortControlPosition=_sortControlPosition - In the implementation block
@property (assign,nonatomic) long long inlineTextViewPosition;                           //@synthesize inlineTextViewPosition=_inlineTextViewPosition - In the implementation block
@property (assign,nonatomic) long long arrowButtonPosition;                              //@synthesize arrowButtonPosition=_arrowButtonPosition - In the implementation block
@property (assign,nonatomic) long long arrowButtonDirection;                             //@synthesize arrowButtonDirection=_arrowButtonDirection - In the implementation block
@property (assign,nonatomic) BOOL hasBackdrop;                                           //@synthesize hasBackdrop=_hasBackdrop - In the implementation block
@property (assign,nonatomic) BOOL candidateNumberEnabled;                                //@synthesize candidateNumberEnabled=_candidateNumberEnabled - In the implementation block
@property (assign,nonatomic) double yOffset;                                             //@synthesize yOffset=_yOffset - In the implementation block
@property (assign,nonatomic) double additionalHeight;                                    //@synthesize additionalHeight=_additionalHeight - In the implementation block
@property (assign,nonatomic) CGPoint arrowButtonOffset;                                  //@synthesize arrowButtonOffset=_arrowButtonOffset - In the implementation block
@property (assign,nonatomic) unsigned long long borders;                                 //@synthesize borders=_borders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)setArrowButtonPosition:(long long)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
-(double)additionalHeight;
-(void)setAdditionalHeight:(double)arg1 ;
-(long long)arrowButtonDirection;
-(long long)arrowButtonPosition;
-(void)setArrowButtonDirection:(long long)arg1 ;
-(void)setArrowButtonOffset:(CGPoint)arg1 ;
-(void)setSortControlPosition:(long long)arg1 ;
-(void)setDisambiguationGridPosition:(long long)arg1 ;
-(id<TUICandidateViewStyle>)disambiguationStyle;
-(long long)primaryGridRowType;
-(void)setDisambiguationStyle:(id<TUICandidateViewStyle>)arg1 ;
-(void)setPrimaryGridRowType:(long long)arg1 ;
-(void)setHasBackdrop:(BOOL)arg1 ;
-(void)setBorders:(unsigned long long)arg1 ;
-(void)setInlineTextViewPosition:(long long)arg1 ;
-(void)setCandidateNumberEnabled:(BOOL)arg1 ;
-(void)setDisambiguationGridRowType:(long long)arg1 ;
-(long long)disambiguationGridRowType;
-(long long)disambiguationGridPosition;
-(long long)sortControlPosition;
-(long long)inlineTextViewPosition;
-(BOOL)hasBackdrop;
-(BOOL)candidateNumberEnabled;
-(CGPoint)arrowButtonOffset;
-(unsigned long long)borders;
@end

