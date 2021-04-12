/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(NSString *)title;
-(NSURL *)contentURL;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithHeadline:(id)arg1 ;
-(LPImage *)linkPresentationImage;
-(id)titleFromHeadline:(id)arg1 ;
-(id)linkPresentationImageFromHeadline:(id)arg1 ;
-(id)urlFromHeadline:(id)arg1 ;
-(double)deviceScreenScaleFromPotentialBackgroundThread;
@end

