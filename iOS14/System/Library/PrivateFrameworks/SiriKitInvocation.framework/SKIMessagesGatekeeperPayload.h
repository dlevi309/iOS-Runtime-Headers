/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriKitInvocation.framework/SiriKitInvocation
*/


@class NSString, SKIDirectInvocationPayload;

@interface SKIMessagesGatekeeperPayload : NSObject {

	NSString* _appBundleId;

}

@property (copy) NSString * appBundleId;                                                 //@synthesize appBundleId=_appBundleId - In the implementation block
@property (retain,readonly) SKIDirectInvocationPayload * invocationPayload; 
+(BOOL)supports:(id)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithAppBundleId:(id)arg1 ;
-(SKIDirectInvocationPayload *)invocationPayload;
@end

