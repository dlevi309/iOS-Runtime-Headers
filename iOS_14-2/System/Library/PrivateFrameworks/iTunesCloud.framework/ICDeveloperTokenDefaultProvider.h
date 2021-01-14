/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICDeveloperTokenProvider.h>

@class NSString;

@interface ICDeveloperTokenDefaultProvider : NSObject <ICDeveloperTokenProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchDeveloperTokenForClientInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

