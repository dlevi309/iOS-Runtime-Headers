/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPImage.h>

@class NSData;

@interface MFPMetafileImage : MFPImage {

	NSData* mMetafileData;

}
-(id)initWithMetafileData:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 unit:(int)arg3 effect:(id)arg4 ;
-(id)phoneImage;
@end

