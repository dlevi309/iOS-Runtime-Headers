/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/PKPushRegistryDelegate.h>

@class NSHashTable, PKPushRegistry, NSString;

@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate> {

	NSHashTable* _delegates;
	PKPushRegistry* _pushRegistry;

}

@property (nonatomic,retain) NSHashTable * delegates;                    //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) PKPushRegistry * pushRegistry;              //@synthesize pushRegistry=_pushRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPushRegistry;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)_init;
-(void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3 ;
-(PKPushRegistry *)pushRegistry;
-(void)setPushRegistry:(PKPushRegistry *)arg1 ;
@end

