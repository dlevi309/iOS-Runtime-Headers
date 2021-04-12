/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCFontSubfamily;

@interface OCFont : NSObject {

	BOOL _bold;
	BOOL _italic;
	OCFontSubfamily* _subfamily;

}

@property (nonatomic,readonly) OCFontSubfamily * subfamily;              //@synthesize subfamily=_subfamily - In the implementation block
@property (assign,nonatomic) BOOL bold;                                  //@synthesize bold=_bold - In the implementation block
@property (assign,nonatomic) BOOL italic;                                //@synthesize italic=_italic - In the implementation block
+(id)fontWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(void)setBold:(BOOL)arg1 ;
-(BOOL)bold;
-(BOOL)italic;
-(void)setItalic:(BOOL)arg1 ;
-(id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(OCFontSubfamily *)subfamily;
@end

