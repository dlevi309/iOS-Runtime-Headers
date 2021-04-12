/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, NSArray;

@interface CPRMList : NSObject {

	NSMutableArray* _items;

}

@property (readonly) NSArray * listItems;              //@synthesize items=_items - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(void)addItem:(id)arg1 ;
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(NSArray *)listItems;
@end

