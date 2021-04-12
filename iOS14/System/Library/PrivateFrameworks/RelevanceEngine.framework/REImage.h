/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImage;

@interface REImage : NSObject <NSCopying, NSCoding>

@property (nonatomic,readonly) UIImage * image; 
+(id)imageWithImage:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2 ;
-(UIImage *)image;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

