/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class REImage;

@interface REAccessoryImage : NSObject <NSCopying, NSCoding> {

	REImage* _image;

}

@property (nonatomic,copy) REImage * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(REImage *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REImage *)image;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

