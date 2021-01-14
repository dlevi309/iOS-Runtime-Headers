/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class FPStringFormat;

@interface FPPreflightUserInteractionAlert : NSObject {

	BOOL _enableContinue;
	BOOL _continueIsDestructive;
	FPStringFormat* _titleFormat;
	FPStringFormat* _subtitleFormat;
	FPStringFormat* _continueCaptionFormat;
	FPStringFormat* _cancelCaptionFormat;

}

@property (nonatomic,retain) FPStringFormat * titleFormat;                        //@synthesize titleFormat=_titleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * subtitleFormat;                     //@synthesize subtitleFormat=_subtitleFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * continueCaptionFormat;              //@synthesize continueCaptionFormat=_continueCaptionFormat - In the implementation block
@property (nonatomic,retain) FPStringFormat * cancelCaptionFormat;                //@synthesize cancelCaptionFormat=_cancelCaptionFormat - In the implementation block
@property (assign,nonatomic) BOOL enableContinue;                                 //@synthesize enableContinue=_enableContinue - In the implementation block
@property (assign,nonatomic) BOOL continueIsDestructive;                          //@synthesize continueIsDestructive=_continueIsDestructive - In the implementation block
+(id)alertFromDictionary:(id)arg1 localizationLookup:(id)arg2 ;
-(void)setTitleFormat:(FPStringFormat *)arg1 ;
-(void)setSubtitleFormat:(FPStringFormat *)arg1 ;
-(FPStringFormat *)titleFormat;
-(void)setContinueCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setCancelCaptionFormat:(FPStringFormat *)arg1 ;
-(void)setEnableContinue:(BOOL)arg1 ;
-(void)setContinueIsDestructive:(BOOL)arg1 ;
-(FPStringFormat *)subtitleFormat;
-(FPStringFormat *)continueCaptionFormat;
-(FPStringFormat *)cancelCaptionFormat;
-(BOOL)enableContinue;
-(BOOL)continueIsDestructive;
@end

