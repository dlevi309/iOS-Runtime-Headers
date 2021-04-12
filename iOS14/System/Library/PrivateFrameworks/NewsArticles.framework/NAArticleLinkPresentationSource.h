/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSString, LPImage, NSURL;

@interface NAArticleLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {

	NSString* _title;
	LPImage* _linkPresentationImage;
	NSURL* _url;
	NSURL* _contentURL;

}

@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) LPImage * linkPresentationImage;              //@synthesize linkPresentationImage=_linkPresentationImage - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)contentURL;
-(NSURL *)url;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithHeadline:(id)arg1 ;
-(NSString *)title;
-(LPImage *)linkPresentationImage;
-(id)titleFromHeadline:(id)arg1 ;
-(id)linkPresentationImageFromHeadline:(id)arg1 ;
-(id)urlFromHeadline:(id)arg1 ;
-(double)deviceScreenScaleFromPotentialBackgroundThread;
@end

