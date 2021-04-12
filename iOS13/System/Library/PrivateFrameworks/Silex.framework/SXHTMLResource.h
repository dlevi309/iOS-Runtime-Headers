/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSURL * baseURL; 
-(NSURL *)baseURL;
-(NSString *)HTML;
@end

