/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)color;
-(id)description;
-(void)setColor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMatrixIndex:(unsigned long long)arg1 ;
-(unsigned long long)matrixIndex;
-(id)initWithMatrixIndex:(unsigned long long)arg1 color:(id)arg2 ;
@end

