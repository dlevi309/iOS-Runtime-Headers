/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSDictionary, UIKBTree;

@interface UIKBSplitRow : NSObject {

	unsigned char _rowIndex;
	double _rowOffset;
	double _rowWidth;
	CGSize _defaultKeySize;
	NSMutableArray* _keys;
	NSMutableArray* _vacancies;
	NSDictionary* _hints;
	UIKBTree* _keylistLeft;
	UIKBTree* _geolistLeft;
	UIKBTree* _attrlistLeft;
	UIKBTree* _keylistRight;
	UIKBTree* _geolistRight;
	UIKBTree* _attrlistRight;

}

@property (assign,nonatomic) unsigned char rowIndex;              //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign) double rowOffset;                              //@synthesize rowOffset=_rowOffset - In the implementation block
@property (assign) double rowWidth;                               //@synthesize rowWidth=_rowWidth - In the implementation block
@property (assign) CGSize defaultKeySize;                         //@synthesize defaultKeySize=_defaultKeySize - In the implementation block
@property (readonly) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
@property (retain) NSDictionary * hints;                          //@synthesize hints=_hints - In the implementation block
-(NSDictionary *)hints;
-(NSMutableArray *)keys;
-(id)init;
-(id)keyAtIndex:(int)arg1 ;
-(void)setRowIndex:(unsigned char)arg1 ;
-(unsigned char)rowIndex;
-(void)setRowWidth:(double)arg1 ;
-(double)rowWidth;
-(void)addKey:(id)arg1 ;
-(void)setHints:(NSDictionary *)arg1 ;
-(void)setRowOffset:(double)arg1 ;
-(id)description;
-(id)listOfType:(int)arg1 left:(BOOL)arg2 ;
-(CGSize)defaultKeySize;
-(void)setDefaultKeySize:(CGSize)arg1 ;
-(double)rowOffset;
-(void)dealloc;
@end

