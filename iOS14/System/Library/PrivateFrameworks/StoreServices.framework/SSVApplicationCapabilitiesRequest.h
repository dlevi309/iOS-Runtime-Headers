/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVApplicationCapabilitiesRequest : SSRequest <SSXPCCoding> {

	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setBundleID:(NSString *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithCapabilitiesResponseBlock:(/*^block*/id)arg1 ;
-(NSString *)bundleID;
@end

