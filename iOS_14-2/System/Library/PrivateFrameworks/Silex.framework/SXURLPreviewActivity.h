/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionPreviewActivity.h>

@protocol SXURLPreviewing;
@class NSURL, NSString;

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity> {

	id<SXURLPreviewing> _URLPreviewing;
	NSURL* _URL;

}

@property (nonatomic,readonly) id<SXURLPreviewing> URLPreviewing;              //@synthesize URLPreviewing=_URLPreviewing - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXURLPreviewing>)URLPreviewing;
-(id)previewViewControllerForAction:(id)arg1 ;
-(NSURL *)URL;
-(void)commitViewController:(id)arg1 action:(id)arg2 ;
-(id)initWithURLPreviewing:(id)arg1 URL:(id)arg2 ;
@end

