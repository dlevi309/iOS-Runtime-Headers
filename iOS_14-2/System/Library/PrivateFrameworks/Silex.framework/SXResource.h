/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXResource.h>
@class NSString, NSURL;


@protocol SXResource <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@required
-(NSURL *)URL;
-(NSString *)identifier;

@end


@class NSString, NSURL;

@interface SXResource : SXJSONObject <SXResource>

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)URL;
-(NSString *)identifier;
@end

