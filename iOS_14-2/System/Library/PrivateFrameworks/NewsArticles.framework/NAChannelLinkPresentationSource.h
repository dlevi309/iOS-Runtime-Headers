/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(NSString *)title;
-(id)initWithChannel:(id)arg1 ;
@end

