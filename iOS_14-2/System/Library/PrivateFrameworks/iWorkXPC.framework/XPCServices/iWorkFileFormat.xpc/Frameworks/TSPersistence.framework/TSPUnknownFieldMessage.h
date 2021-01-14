/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPUnknownField.h>

@class TSPLazyReferenceArray, NSArray;

@interface TSPUnknownFieldMessage : TSPUnknownField {

	TSPLazyReferenceArray* _strongObjects;
	TSPLazyReferenceArray* _weakObjects;
	NSArray* _datas;

}
-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
@end

