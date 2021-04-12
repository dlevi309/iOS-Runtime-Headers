/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)width;
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(double)height;
-(id)min:(double)arg1 :(double)arg2 ;
-(id)max:(double)arg1 :(double)arg2 ;
-(id)CGSizeValue;
-(id)description;
-(id)asRect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)scale:(double)arg1 :(double)arg2 ;
-(id)extend:(double)arg1 :(double)arg2 ;
@end

