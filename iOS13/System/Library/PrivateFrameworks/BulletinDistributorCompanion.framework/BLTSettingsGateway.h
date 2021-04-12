/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

