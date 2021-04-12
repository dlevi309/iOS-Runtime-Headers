/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFPGraphicsState : NSObject {

	CGAffineTransform mPageTransform;
	CGAffineTransform mWorldTransform;

}
-(void)removeTransform:(CGAffineTransform)arg1 ;
-(id)initWithDefaults;
-(CGAffineTransform)worldTransform;
-(void)setWorldTransform:(CGAffineTransform)arg1 ;
-(void)multiplyWorldTransformBy:(CGAffineTransform)arg1 order:(int)arg2 ;
-(void)setPageTransform:(CGAffineTransform)arg1 ;
-(id)initWithGraphicsState:(id)arg1 ;
-(CGAffineTransform)pageTransform;
@end

