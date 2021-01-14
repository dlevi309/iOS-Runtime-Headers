/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProgressLabel:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)progressLabel;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(NSString *)title;
-(void)setEscapeAction:(id)arg1 ;
-(void)setProgressTitle:(NSString *)arg1 ;
-(id)escapeAction;
-(NSString *)progressTitle;
@end

