/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WebEventRegion : NSObject <NSCopying> {

	CGPoint p1;
	CGPoint p2;
	CGPoint p3;
	CGPoint p4;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(FloatQuad)quad;
-(id)initWithPoints:(CGPoint)arg1 :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4 ;
-(CGPoint)p1;
-(CGPoint)p2;
-(CGPoint)p3;
-(CGPoint)p4;
@end

