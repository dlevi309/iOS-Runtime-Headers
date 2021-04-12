/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)size;
-(unsigned)flags;
-(void)setSize:(float)arg1 ;
-(id)name;
-(int)unit;
-(void)setFlags:(unsigned)arg1 ;
-(void)setName:(id)arg1 ;
-(void)setUnit:(int)arg1 ;
-(CTFontRef)createCTFontWithGraphics:(id)arg1 ;
@end

