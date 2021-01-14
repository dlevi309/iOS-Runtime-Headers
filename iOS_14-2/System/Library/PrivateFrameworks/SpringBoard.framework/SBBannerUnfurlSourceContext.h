/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface SBBannerUnfurlSourceContext : NSObject <NSCopying, NSMutableCopying> {

	double _cornerRadius;
	CGRect _referenceCoordinateSpaceBounds;
	CGRect _referenceFrame;
	CGPoint _referenceVelocity;

}

@property (nonatomic,readonly) CGRect referenceCoordinateSpaceBounds;              //@synthesize referenceCoordinateSpaceBounds=_referenceCoordinateSpaceBounds - In the implementation block
@property (nonatomic,readonly) CGRect referenceFrame;                              //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) CGPoint referenceVelocity;                          //@synthesize referenceVelocity=_referenceVelocity - In the implementation block
-(id)_copyWithClass:(Class)arg1 ;
-(CGRect)referenceFrame;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)cornerRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)referenceVelocity;
-(CGRect)referenceCoordinateSpaceBounds;
@end

