/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXURLHandling, SXURLPreviewing, SXHost, SXLinkActionURLQualifier;
@class NSString;

@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXURLHandling> _URLHandler;
	id<SXURLPreviewing> _URLPreviewing;
	id<SXHost> _host;
	id<SXLinkActionURLQualifier> _URLQualifier;

}

@property (nonatomic,readonly) id<SXURLHandling> URLHandler;                           //@synthesize URLHandler=_URLHandler - In the implementation block
@property (nonatomic,readonly) id<SXURLPreviewing> URLPreviewing;                      //@synthesize URLPreviewing=_URLPreviewing - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                        //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<SXLinkActionURLQualifier> URLQualifier;              //@synthesize URLQualifier=_URLQualifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4 ;
-(void)open:(id)arg1 ;
-(id<SXURLPreviewing>)URLPreviewing;
-(id)activityGroupForAction:(id)arg1 ;
-(void)openInSafari:(id)arg1 ;
-(id<SXURLHandling>)URLHandler;
-(id<SXLinkActionURLQualifier>)URLQualifier;
-(void)openInNewWindow:(id)arg1 ;
-(id)previewActivityForAction:(id)arg1 ;
@end

