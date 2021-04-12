/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLSizeJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TMLSize : NSObject <TMLSizeJSExports, NSCopying> {

	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
+(void)initializeJSContext:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(double)width;
-(double)height;
-(id)initWithSize:(CGSize)arg1 ;
-(id)CGSizeValue;
-(id)min:(double)arg1 :(double)arg2 ;
-(id)max:(double)arg1 :(double)arg2 ;
-(id)extend:(double)arg1 :(double)arg2 ;
-(id)scale:(double)arg1 :(double)arg2 ;
-(id)asRect;
@end

