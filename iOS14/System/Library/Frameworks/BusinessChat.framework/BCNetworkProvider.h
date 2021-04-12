/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCNetworkProviderProtocol.h>

@class NSURLSession, NSString;

@interface BCNetworkProvider : NSObject <BCNetworkProviderProtocol> {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSURLSession *)session;
-(void)performDataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

