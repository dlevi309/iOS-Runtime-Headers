/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSString;

@interface REFileImage : REImage {

	NSString* _path;
	double _scale;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) double scale;                      //@synthesize scale=_scale - In the implementation block
-(id)image;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

