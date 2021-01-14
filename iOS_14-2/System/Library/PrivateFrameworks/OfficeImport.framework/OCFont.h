/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)bold;
-(BOOL)italic;
-(void)setBold:(BOOL)arg1 ;
-(void)setItalic:(BOOL)arg1 ;
-(id)initWithSubfamily:(id)arg1 bold:(BOOL)arg2 italic:(BOOL)arg3 ;
-(OCFontSubfamily *)subfamily;
@end

