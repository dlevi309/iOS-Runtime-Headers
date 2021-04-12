/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(EDString *)author;
-(void)setAuthor:(EDString *)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(int)rowIndex;
-(void)setRowIndex:(int)arg1 ;
-(int)columnIndex;
-(void)setColumnIndex:(int)arg1 ;
@end

