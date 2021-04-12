/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding> {

	NSString* _appBundleId;
	unsigned long long _action;

}

@property (nonatomic,copy) NSString * appBundleId;                   //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
@end

