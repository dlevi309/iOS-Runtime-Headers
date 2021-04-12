/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)url;
-(NSString *)title;
-(NSString *)subtitle;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithIssue:(id)arg1 ;
-(id)titleFromIssue:(id)arg1 ;
-(id)subtitleFromIssue:(id)arg1 ;
-(id)linkPresentationImageFromIssue:(id)arg1 ;
-(id)urlFromIssue:(id)arg1 ;
-(LPImage *)linkPresentationImage;
@end

