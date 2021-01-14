/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGRect)bounds;
-(unsigned long long)columns;
-(void)dump;
-(CGPDFPageRef)page;
-(id)columnAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CP41*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)rows;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(CGPDFLayoutRef)layout;
-(id)initWithRoot:(CGPDFNodeRef)arg1 layout:(CGPDFLayoutRef)arg2 ;
-(void)setRowOrder:(BOOL)arg1 ;
-(BOOL)rowOrder;
-(void)matrixDealloc;
@end

