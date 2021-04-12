/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDString;

@interface EDComment : NSObject {

	BOOL _visible;
	int _rowIndex;
	int _columnIndex;
	EDString* _author;

}

@property (assign,nonatomic) int rowIndex;                   //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) int columnIndex;                //@synthesize columnIndex=_columnIndex - In the implementation block
@property (nonatomic,retain) EDString * author;              //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) BOOL visible;                   //@synthesize visible=_visible - In the implementation block
-(int)columnIndex;
-(EDString *)author;
-(void)setAuthor:(EDString *)arg1 ;
-(void)setColumnIndex:(int)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)setRowIndex:(int)arg1 ;
-(int)rowIndex;
-(id)description;
@end

