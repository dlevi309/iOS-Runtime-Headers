/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {

	unsigned long long mMatrixIndex;
	OADColor* mColor;

}
+(id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setMatrixIndex:(unsigned long long)arg1 ;
-(unsigned long long)matrixIndex;
-(id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2 ;
@end

