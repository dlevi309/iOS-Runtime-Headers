/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

@class NSString, NSURL, NSDictionary;


@protocol LSIconResourceLocator <NSObject>
@property (copy,readonly) NSString * applicationIdentifier; 
@property (readonly) NSURL * resourcesDirectoryURL; 
@property (readonly) NSDictionary * bundleIconsDictionary; 
@required
-(NSDictionary *)bundleIconsDictionary;
-(NSString *)applicationIdentifier;
-(NSURL *)resourcesDirectoryURL;

@end

