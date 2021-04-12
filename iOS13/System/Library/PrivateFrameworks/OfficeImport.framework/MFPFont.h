/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface MFPFont : NSObject {

	float mSize;
	int mUnit;
	unsigned mFlags;
	NSString* mName;

}
-(id)name;
-(void)setName:(id)arg1 ;
-(unsigned)flags;
-(float)size;
-(int)unit;
-(void)setSize:(float)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setUnit:(int)arg1 ;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

