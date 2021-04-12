/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/


@class NSString;

@interface CDPEscapeOption : NSObject {

	NSString* _title;
	unsigned long long _style;
	/*^block*/id _escapeAction;
	NSString* _progressTitle;
	NSString* _progressLabel;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id escapeAction;                         //@synthesize escapeAction=_escapeAction - In the implementation block
@property (nonatomic,copy) NSString * progressTitle;                //@synthesize progressTitle=_progressTitle - In the implementation block
@property (nonatomic,copy) NSString * progressLabel;                //@synthesize progressLabel=_progressLabel - In the implementation block
+(id)cancelOption;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setProgressLabel:(NSString *)arg1 ;
-(NSString *)progressLabel;
-(void)setEscapeAction:(id)arg1 ;
-(void)setProgressTitle:(NSString *)arg1 ;
-(id)escapeAction;
-(NSString *)progressTitle;
@end

