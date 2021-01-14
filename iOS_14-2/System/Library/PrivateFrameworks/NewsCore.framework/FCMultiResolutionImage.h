/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FCMultiResolutionImage : NSObject <NSCopying> {

	NSURL* _imageURL1x;
	NSURL* _imageURL2x;
	NSURL* _imageURL3x;

}

@property (nonatomic,retain) NSURL * imageURL1x;              //@synthesize imageURL1x=_imageURL1x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL2x;              //@synthesize imageURL2x=_imageURL2x - In the implementation block
@property (nonatomic,retain) NSURL * imageURL3x;              //@synthesize imageURL3x=_imageURL3x - In the implementation block
-(id)initWithConfigDictionary:(id)arg1 ;
-(void)setImageURL2x:(NSURL *)arg1 ;
-(void)setImageURL3x:(NSURL *)arg1 ;
-(id)init;
-(NSURL *)imageURL3x;
-(unsigned long long)hash;
-(id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3 ;
-(NSURL *)imageURL1x;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImageURL1x:(NSURL *)arg1 ;
-(NSURL *)imageURL2x;
@end

