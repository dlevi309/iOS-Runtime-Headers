/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcherResponse.h>
#import <libobjc.A.dylib/LPFetcherURLResponse.h>

@class LPImage, NSString;

@interface LPFetcherImageResponse : LPFetcherResponse <LPFetcherURLResponse> {

	LPImage* _image;

}

@property (nonatomic,retain,readonly) LPImage * image;              //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isValidMIMEType:(id)arg1 ;
+(id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3 ;
+(id)imagePropertiesForFetcher:(id)arg1 ;
-(LPImage *)image;
-(id)initWithImage:(id)arg1 fetcher:(id)arg2 ;
@end

