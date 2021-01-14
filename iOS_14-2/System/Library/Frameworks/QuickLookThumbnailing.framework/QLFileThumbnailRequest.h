/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL, NSDictionary;

@interface QLFileThumbnailRequest : NSObject {

	double _scale;
	NSURL* _fileURL;
	unsigned long long _badgeType;
	NSDictionary* _generationData;
	CGSize _maximumSize;
	CGSize _minimumSize;

}

@property (assign,nonatomic) CGSize maximumSize;                         //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                         //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;               //@synthesize badgeType=_badgeType - In the implementation block
@property (nonatomic,retain) NSDictionary * generationData;              //@synthesize generationData=_generationData - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(CGSize)maximumSize;
-(double)scale;
-(NSURL *)fileURL;
-(void)setMinimumSize:(CGSize)arg1 ;
-(unsigned long long)badgeType;
-(CGSize)minimumSize;
-(void)setScale:(double)arg1 ;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(id)initWithMaximumSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 fileURL:(id)arg5 generationData:(id)arg6 ;
-(NSDictionary *)generationData;
-(void)setGenerationData:(NSDictionary *)arg1 ;
@end

