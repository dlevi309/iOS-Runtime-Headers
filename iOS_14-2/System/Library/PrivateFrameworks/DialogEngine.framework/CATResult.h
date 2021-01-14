/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSDictionary, NSArray;

@interface CATResult : NSObject {

	NSString* _catId;
	NSDictionary* _meta;
	NSArray* _speak;
	NSArray* _print;
	NSArray* _dialogId;
	NSArray* _captionSpeak;
	NSArray* _captionPrint;
	NSArray* _printOnly;
	NSArray* _spokenOnly;

}

@property (nonatomic,retain) NSString * catId;                    //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;                 //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSArray * speak;                     //@synthesize speak=_speak - In the implementation block
@property (nonatomic,retain) NSArray * print;                     //@synthesize print=_print - In the implementation block
@property (nonatomic,retain) NSArray * dialogId;                  //@synthesize dialogId=_dialogId - In the implementation block
@property (nonatomic,retain) NSArray * captionSpeak;              //@synthesize captionSpeak=_captionSpeak - In the implementation block
@property (nonatomic,retain) NSArray * captionPrint;              //@synthesize captionPrint=_captionPrint - In the implementation block
@property (nonatomic,retain) NSArray * printOnly;                 //@synthesize printOnly=_printOnly - In the implementation block
@property (nonatomic,retain) NSArray * spokenOnly;                //@synthesize spokenOnly=_spokenOnly - In the implementation block
-(NSDictionary *)meta;
-(NSArray *)dialogId;
-(void)setPrint:(NSArray *)arg1 ;
-(void)setSpeak:(NSArray *)arg1 ;
-(NSArray *)speak;
-(NSString *)catId;
-(void)setDialogId:(NSArray *)arg1 ;
-(void)setCatId:(NSString *)arg1 ;
-(NSArray *)captionSpeak;
-(void)setCaptionSpeak:(NSArray *)arg1 ;
-(NSArray *)captionPrint;
-(void)setCaptionPrint:(NSArray *)arg1 ;
-(NSArray *)printOnly;
-(void)setPrintOnly:(NSArray *)arg1 ;
-(NSArray *)spokenOnly;
-(void)setSpokenOnly:(NSArray *)arg1 ;
-(void)setMeta:(NSDictionary *)arg1 ;
-(NSArray *)print;
@end

