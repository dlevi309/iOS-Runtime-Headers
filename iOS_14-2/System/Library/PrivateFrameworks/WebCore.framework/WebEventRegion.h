/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)p1;
-(CGPoint)p2;
-(CGPoint)p3;
-(CGPoint)p4;
-(FloatQuad)quad;
-(id)initWithPoints:(CGPoint)arg1 :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4 ;
-(id)description;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

