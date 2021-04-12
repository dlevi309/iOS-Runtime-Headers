/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLTExtensionThumbnailItem;
@class QLThumbnailHostContext;

@interface QLExtensionHostContextThumbnailOperation : QLAsynchronousOperation {

	QLThumbnailHostContext* _hostContext;
	/*^block*/id _serviceErrorHandler;
	/*^block*/id _completionHandler;
	id<QLTExtensionThumbnailItem> _item;
	double _minimumSize;
	double _scale;
	unsigned long long _badgeType;
	CGSize _size;

}

@property (nonatomic,retain) QLThumbnailHostContext * hostContext;              //@synthesize hostContext=_hostContext - In the implementation block
@property (nonatomic,copy) id serviceErrorHandler;                              //@synthesize serviceErrorHandler=_serviceErrorHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id<QLTExtensionThumbnailItem> item;                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double minimumSize;                                //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long badgeType;                      //@synthesize badgeType=_badgeType - In the implementation block
-(CGSize)size;
-(id<QLTExtensionThumbnailItem>)item;
-(void)setItem:(id<QLTExtensionThumbnailItem>)arg1 ;
-(void)main;
-(double)scale;
-(void)finish;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)minimumSize;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setMinimumSize:(double)arg1 ;
-(void)setHostContext:(QLThumbnailHostContext *)arg1 ;
-(QLThumbnailHostContext *)hostContext;
-(void)setBadgeType:(unsigned long long)arg1 ;
-(unsigned long long)badgeType;
-(id)initWithThumbnailHostContext:(id)arg1 item:(id)arg2 size:(CGSize)arg3 minimumSize:(double)arg4 scale:(double)arg5 badgeType:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 serviceErrorHandler:(/*^block*/id)arg8 ;
-(id)serviceErrorHandler;
-(void)setServiceErrorHandler:(id)arg1 ;
@end

