/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSString;

@interface ICAttachmentBrickInfo : NSObject {

	BOOL _titleLight;
	BOOL _detail1Dark;
	NSString* _titleString;
	NSString* _detail1String;
	NSString* _detail2String;

}

@property (nonatomic,copy) NSString * titleString;                //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * detail1String;              //@synthesize detail1String=_detail1String - In the implementation block
@property (nonatomic,copy) NSString * detail2String;              //@synthesize detail2String=_detail2String - In the implementation block
@property (assign,nonatomic) BOOL titleLight;                     //@synthesize titleLight=_titleLight - In the implementation block
@property (assign,nonatomic) BOOL detail1Dark;                    //@synthesize detail1Dark=_detail1Dark - In the implementation block
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)detail1String;
-(NSString *)detail2String;
-(void)setDetail1String:(NSString *)arg1 ;
-(void)setDetail2String:(NSString *)arg1 ;
-(BOOL)titleLight;
-(void)setTitleLight:(BOOL)arg1 ;
-(BOOL)detail1Dark;
-(void)setDetail1Dark:(BOOL)arg1 ;
@end

