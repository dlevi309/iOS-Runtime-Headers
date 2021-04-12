/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDWorkbook, EDResources, NSMutableArray;

@interface EDProcessor : NSObject {

	EDWorkbook* mWorkbook;
	EDResources* mResources;
	NSMutableArray* mObjects;

}
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)markObjectForPostProcessing:(id)arg1 ;
-(void)applyProcessorWithSheet:(id)arg1 ;
@end

