/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
*/

#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class NSString, LPImage, NSURL;

@interface NAIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {

	NSString* _title;
	NSString* _subtitle;
	LPImage* _linkPresentationImage;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) LPImage * linkPresentationImage;              //@synthesize linkPresentationImage=_linkPresentationImage - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)subtitle;
-(NSURL *)url;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(NSString *)title;
-(id)titleFromIssue:(id)arg1 ;
-(id)subtitleFromIssue:(id)arg1 ;
-(id)linkPresentationImageFromIssue:(id)arg1 ;
-(id)urlFromIssue:(id)arg1 ;
-(LPImage *)linkPresentationImage;
-(id)initWithIssue:(id)arg1 ;
@end

