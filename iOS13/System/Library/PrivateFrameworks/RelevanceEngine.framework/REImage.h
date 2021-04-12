/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface REImage : NSObject <NSCopying, NSCoding>
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

