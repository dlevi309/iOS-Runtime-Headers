/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSString, NSURL;

@interface NAChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {

	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(NSString *)title;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithChannel:(id)arg1 ;
@end

