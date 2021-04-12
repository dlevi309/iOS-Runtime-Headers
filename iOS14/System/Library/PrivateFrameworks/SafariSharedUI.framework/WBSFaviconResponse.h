/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSSiteMetadataResponse.h>
#import <libobjc.A.dylib/WBSIconResponse.h>

@class UIImage, UIColor, NSString;

@interface WBSFaviconResponse : WBSSiteMetadataResponse <WBSIconResponse> {

	UIImage* _favicon;
	unsigned long long _faviconType;

}

@property (nonatomic,readonly) UIImage * favicon;                               //@synthesize favicon=_favicon - In the implementation block
@property (nonatomic,readonly) unsigned long long faviconType;                  //@synthesize faviconType=_faviconType - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (getter=isGenerated,nonatomic,readonly) BOOL generated; 
@property (nonatomic,readonly) UIColor * extractedBackgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(UIImage *)icon;
-(UIImage *)favicon;
-(unsigned long long)faviconType;
-(id)initWithURL:(id)arg1 favicon:(id)arg2 faviconType:(unsigned long long)arg3 ;
@end

