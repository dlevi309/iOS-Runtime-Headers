/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppAttestInternal.framework/AppAttestInternal
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSString;

@interface PinnedUrlDelegate : NSObject <NSURLSessionDelegate> {

	NSString* m_host;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHost:(id)arg1 ;
@end

