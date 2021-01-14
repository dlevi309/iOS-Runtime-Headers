/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {

	EDWorkbook* mWorkbook;
	NSMutableArray* mProcessors;

}
-(void)removeAllObjects;
-(void)markObject:(id)arg1 processor:(Class)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addProcessorClass:(Class)arg1 ;
-(BOOL)hasProcessors;
-(void)removeProcessorClass:(Class)arg1 ;
-(void)applyProcessorsWithSheet:(id)arg1 ;
@end

