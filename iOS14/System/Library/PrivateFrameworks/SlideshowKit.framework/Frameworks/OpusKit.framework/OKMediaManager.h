/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<OKMediaManagerDelegate>)delegate;
-(void)setDelegate:(id<OKMediaManagerDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)mediaItemForURL:(id)arg1 ;
-(id)mediaURLsForMediaObjects:(id)arg1 ;
-(id)mediaURLForMediaObject:(id)arg1 ;
-(id)mediaItemsForURLs:(id)arg1 ;
-(void)addMediaItemClass:(Class)arg1 ;
-(Class)mediaItemClassForURL:(id)arg1 ;
-(void)removeMediaItemClass:(Class)arg1 ;
@end

