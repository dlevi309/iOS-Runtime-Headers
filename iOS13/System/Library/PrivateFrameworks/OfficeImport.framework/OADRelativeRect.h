/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRelativeRect : NSObject <NSCopying> {

	float mLeft;
	float mTop;
	float mRight;
	float mBottom;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)left;
-(void)setLeft:(float)arg1 ;
-(float)top;
-(float)bottom;
-(float)right;
-(void)setBottom:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4 ;
@end

