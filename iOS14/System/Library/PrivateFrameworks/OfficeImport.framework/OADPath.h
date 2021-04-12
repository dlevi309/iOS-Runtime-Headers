/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addElement:(id)arg1 ;
-(id)init;
-(int)fillMode;
-(void)setFillMode:(int)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)elementAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)elementCount;
-(BOOL)stroked;
-(void)setStroked:(BOOL)arg1 ;
@end

