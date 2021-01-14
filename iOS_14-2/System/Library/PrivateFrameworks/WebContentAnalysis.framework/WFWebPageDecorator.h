/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/

#import <libobjc.A.dylib/WFWebPageProtocol.h>

@protocol WFWebPageProtocol;
@class NSObject, WFImgArrayCache, NSString;

@interface WFWebPageDecorator : NSObject <WFWebPageProtocol> {

	NSObject*<WFWebPageProtocol> webPageStripper;
	WFImgArrayCache* pageImagesPropertyCache;
	NSString* URLString;

}

@property (retain) NSString * URLString; 
+(id)webPageWithString:(id)arg1 URLString:(id)arg2 ;
+(id)_plainTextWithSelector:(SEL)arg1 object:(id)arg2 ;
+(id)plainTextWithWebPageData:(id)arg1 ;
+(id)plainTextWithWebPageString:(id)arg1 ;
+(id)webPageWithData:(id)arg1 ;
+(id)webPageWithData:(id)arg1 URLString:(id)arg2 ;
+(id)webPageWithString:(id)arg1 ;
-(NSString *)URLString;
-(id)tags;
-(id)pageTitle;
-(long long)numberOfImages;
-(id)images;
-(id)links;
-(void)setURLString:(NSString *)arg1 ;
-(long long)wordCount;
-(id)pageContent;
-(void)dealloc;
-(id)plainText;
-(long long)numberOfKnownImagePixels;
-(long long)numberOfUnknownSizedImages;
-(id)metaTagDescription;
-(id)metaTagKeywords;
-(id)metaTagsLabeled;
-(id)metaTagsUnlabeled;
-(id)scriptBlocks;
-(BOOL)hasFrameset;
-(BOOL)hasShortRefresh;
-(id)initWithWebPageData:(id)arg1 ;
-(id)initWithWebPageString:(id)arg1 ;
-(id)initWithWebPageStripper:(id)arg1 ;
-(void)_cacheImgProperties;
-(id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 weight:(int)arg3 ;
-(id)plainTextAttributeWithSelector:(SEL)arg1 title:(id)arg2 ;
-(id)imageAltsText;
-(id)rawPlainText;
-(id)linkTitlesText;
@end

