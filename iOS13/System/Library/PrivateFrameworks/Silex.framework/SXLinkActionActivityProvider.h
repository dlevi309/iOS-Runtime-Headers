/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)open:(id)arg1 ;
-(id<SXURLHandling>)URLHandler;
-(id)activityGroupForAction:(id)arg1 ;
-(id)previewActivityForAction:(id)arg1 ;
-(id<SXLinkActionURLQualifier>)URLQualifier;
-(void)openInSafari:(id)arg1 ;
-(id<SXURLPreviewing>)URLPreviewing;
-(id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4 ;
@end

