/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/

#import <QuickLookSupport/QLExtensionPreview.h>

@class QLURLHandler, NSArray;

@interface QLURLExtensionPreview : QLExtensionPreview {

	QLURLHandler* _urlHandler;
	NSArray* _additionalURLsAccessed;

}

@property (retain) QLURLHandler * urlHandler;                     //@synthesize urlHandler=_urlHandler - In the implementation block
@property (retain) NSArray * additionalURLsAccessed;              //@synthesize additionalURLsAccessed=_additionalURLsAccessed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(QLURLHandler *)urlHandler;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrlHandler:(QLURLHandler *)arg1 ;
-(id)initWithURLHandler:(id)arg1 previewDescription:(id)arg2 ;
-(id)initWithURL:(id)arg1 previewDescription:(id)arg2 ;
-(NSArray *)additionalURLsAccessed;
-(void)setAdditionalURLsAccessed:(NSArray *)arg1 ;
@end

