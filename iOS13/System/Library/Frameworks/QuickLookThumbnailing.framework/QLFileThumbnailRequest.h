/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL;

@interface QLFileThumbnailRequest : NSObject {

	double _scale;
	NSURL* _fileURL;
	unsigned long long _badgeType;
	CGSize _maximumSize;
	CGSize _minimumSize;

}

@property (assign,nonatomic) CGSize maximumSize;                        //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                        //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;              //@synthesize badgeType=_badgeType - In the implementation block
-(double)scale;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setScale:(double)arg1 ;
-(CGSize)minimumSize;
-(CGSize)maximumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)badgeType;
-(id)initWithMaximumSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 fileURL:(id)arg5 ;
@end

