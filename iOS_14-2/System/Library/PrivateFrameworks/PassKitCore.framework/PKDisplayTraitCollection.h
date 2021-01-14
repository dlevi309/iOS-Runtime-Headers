/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKDisplayTraitCollection : NSObject <NSSecureCoding> {

	double _canvasScale;
	CGSize _canvasSize;

}

@property (assign,nonatomic) CGSize canvasSize;               //@synthesize canvasSize=_canvasSize - In the implementation block
@property (assign,nonatomic) double canvasScale;              //@synthesize canvasScale=_canvasScale - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)canvasSize;
-(id)initWithCoder:(id)arg1 ;
-(double)canvasScale;
-(id)initWithDefaultTraits;
-(void)setCanvasScale:(double)arg1 ;
-(void)setCanvasSize:(CGSize)arg1 ;
@end

