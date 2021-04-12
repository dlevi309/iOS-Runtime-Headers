/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFRegistrationContainer.h>

@class NFContainer, NSString;

@interface NFProxyContainer : NSObject <NFRegistrationContainer> {

	NFContainer* _container;
	NFContainer* _privateContainer;

}

@property (nonatomic,retain) NFContainer * container;                     //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NFContainer * privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NFContainer *)container;
-(void)setContainer:(NFContainer *)arg1 ;
-(NFContainer *)privateContainer;
-(id)initWithContainer:(id)arg1 privateContainer:(id)arg2 ;
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(void)setPrivateContainer:(NFContainer *)arg1 ;
@end

