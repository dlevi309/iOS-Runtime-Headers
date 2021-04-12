/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface CPRMTable : NSObject <NSFastEnumeration> {

	NSMutableArray* _matrix;
	unsigned long long _elementCount;
	NSMutableArray* _rowFirstElements;
	NSMutableArray* _columnFirstElements;
	CGPDFLayoutRef _layout;
	CGPDFNodeRef _tableRoot;
	BOOL _rowOrder;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) BOOL rowOrder;                    //@synthesize rowOrder=_rowOrder - In the implementation block
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CP41*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dump;
-(CGRect)bounds;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rows;
-(unsigned long long)columns;
-(CGPDFLayoutRef)layout;
-(CGPDFPageRef)page;
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(BOOL)arg1 ;
-(BOOL)rowOrder;
-(void)matrixDealloc;
-(id)columnAtIndex:(unsigned long long)arg1 ;
@end

