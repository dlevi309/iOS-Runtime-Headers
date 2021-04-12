/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSData;

@interface REDataImage : REImage {

	NSData* _data;
	double _scale;

}

@property (nonatomic,copy,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) double scale;                    //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(double)scale;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
@end

