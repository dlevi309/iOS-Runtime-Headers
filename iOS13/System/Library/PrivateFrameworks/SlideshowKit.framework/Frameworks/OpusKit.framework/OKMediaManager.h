/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@protocol OKMediaManagerDelegate;
#import <OpusKit/OpusKit-Structs.h>
@class NSMutableDictionary;

@interface OKMediaManager : NSObject {

	id<OKMediaManagerDelegate> _delegate;
	NSMutableDictionary* _mediaSourcesByScheme;

}

@property (assign,nonatomic) id<OKMediaManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<OKMediaManagerDelegate>)delegate;
-(void)setDelegate:(id<OKMediaManagerDelegate>)arg1 ;
-(id)mediaItemForURL:(id)arg1 ;
-(id)mediaURLsForMediaObjects:(id)arg1 ;
-(id)mediaURLForMediaObject:(id)arg1 ;
-(id)mediaItemsForURLs:(id)arg1 ;
-(void)addMediaItemClass:(Class)arg1 ;
-(Class)mediaItemClassForURL:(id)arg1 ;
-(void)removeMediaItemClass:(Class)arg1 ;
@end

