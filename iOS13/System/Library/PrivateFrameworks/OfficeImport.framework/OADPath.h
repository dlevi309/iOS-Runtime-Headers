/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface OADPath : NSObject {

	CGSize mSize;
	NSMutableArray* mElements;
	int mFillMode;
	BOOL mStroked;

}
-(id)init;
-(id)description;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(void)addElement:(id)arg1 ;
-(void)setFillMode:(int)arg1 ;
-(unsigned long long)elementCount;
-(int)fillMode;
-(BOOL)stroked;
-(void)setStroked:(BOOL)arg1 ;
@end

