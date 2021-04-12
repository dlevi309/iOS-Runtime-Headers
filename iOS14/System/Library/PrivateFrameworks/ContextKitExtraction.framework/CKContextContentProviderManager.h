/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/ContextKitExtraction
*/


@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {

	NSHashTable* _providers;

}
+(BOOL)isSpringBoard;
+(id)sharedManager;
+(void)_observeApplicationStateNotifications;
-(id)init;
-(void)removeProvider:(id)arg1 ;
-(void)prepareDonationWithNonce:(unsigned long long)arg1 andReply:(/*^block*/id)arg2 ;
-(BOOL)_isDonationAllowedWithControlCode:(unsigned char)arg1 ;
-(void)addProvider:(id)arg1 ;
@end

