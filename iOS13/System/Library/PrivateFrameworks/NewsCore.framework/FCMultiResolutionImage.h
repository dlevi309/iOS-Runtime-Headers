/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithImageURL1X:(id)arg1 imageURL2X:(id)arg2 imageURL3X:(id)arg3 ;
-(NSURL *)imageURL1x;
-(NSURL *)imageURL2x;
-(NSURL *)imageURL3x;
-(void)setImageURL1x:(NSURL *)arg1 ;
-(void)setImageURL2x:(NSURL *)arg1 ;
-(void)setImageURL3x:(NSURL *)arg1 ;
@end

