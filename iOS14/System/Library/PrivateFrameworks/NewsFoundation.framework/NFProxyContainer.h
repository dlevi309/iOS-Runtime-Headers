/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(id)registerKey:(id)arg1 factory:(/*^block*/id)arg2 ;
-(NFContainer *)privateContainer;
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(void)setContainer:(NFContainer *)arg1 ;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(void)setPrivateContainer:(NFContainer *)arg1 ;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(NFContainer *)container;
-(id)initWithContainer:(id)arg1 privateContainer:(id)arg2 ;
@end

