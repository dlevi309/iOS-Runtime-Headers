/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSDBezierPath* mBezierPath;

}

@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) TSDBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)dealloc;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(TSDBezierPath *)bezierPath;
-(void)setBezierPath:(TSDBezierPath *)arg1 ;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
@end

