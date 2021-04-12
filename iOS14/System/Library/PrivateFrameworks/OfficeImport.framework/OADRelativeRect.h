/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)left;
-(id)init;
-(float)right;
-(void)setBottom:(float)arg1 ;
-(void)setLeft:(float)arg1 ;
-(id)description;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(float)bottom;
-(float)top;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4 ;
@end

