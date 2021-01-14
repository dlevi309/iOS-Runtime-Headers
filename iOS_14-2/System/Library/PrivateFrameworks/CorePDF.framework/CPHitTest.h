/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {

	CPPage* page;
	NSMutableArray* objectsOnPage;
	float mapTemp;

}
-(id)page;
-(id)column:(CGPoint)arg1 ;
-(id)initWithPage:(id)arg1 ;
-(void)dealloc;
-(void)findClickableObjects:(BOOL)arg1 ;
-(id)objectAtPoint:(CGPoint)arg1 ;
-(id)paragraph:(CGPoint)arg1 ;
-(id)findObjectIn:(id)arg1 at:(CGPoint)arg2 count:(int*)arg3 ;
-(id)textLine:(CGPoint)arg1 ;
-(id)paragraphNear:(CGPoint)arg1 ;
-(id)layoutArea:(CGPoint)arg1 ;
-(unsigned)columnsAt:(CGPoint)arg1 ;
-(long long)compareByReadingOrder:(CGPoint)arg1 to:(CGPoint)arg2 ;
-(BOOL)hitTestGraphicObject:(id)arg1 point:(CGPoint)arg2 ;
-(BOOL)hitTestParagraph:(id)arg1 point:(CGPoint)arg2 ;
-(id)findBestMatch:(id)arg1 atPoint:(CGPoint)arg2 ;
@end

