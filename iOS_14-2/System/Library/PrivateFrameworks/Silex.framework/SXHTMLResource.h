/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXHTMLResource.h>
@class NSString, NSURL;


@protocol SXHTMLResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
@required
-(NSURL *)baseURL;
-(NSString *)HTML;

@end


@class NSString, NSURL;

@interface SXHTMLResource : SXResource <SXHTMLResource>

@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)baseURL;
-(NSString *)HTML;
@end

