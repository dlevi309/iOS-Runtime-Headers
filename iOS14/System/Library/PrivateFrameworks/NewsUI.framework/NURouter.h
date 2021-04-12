/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NURouter.h>

@protocol NURouter <NSObject>
@required
-(void)routeToNewsAppForYouFeed;

@end


@protocol NUURLHandling;
@class NSString;

@interface NURouter : NSObject <NURouter> {

	id<NUURLHandling> _urlHandler;

}

@property (nonatomic,readonly) id<NUURLHandling> urlHandler;              //@synthesize urlHandler=_urlHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUURLHandling>)urlHandler;
-(void)routeToNewsAppForYouFeed;
-(id)initWithURLHandler:(id)arg1 ;
@end

