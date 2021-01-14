/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject {

	BBSettingsGateway* _actualSettingsGateway;
	NSLock* _actualSettingsGatewayLock;
	int _token;

}
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)surrogateWithQueue:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

