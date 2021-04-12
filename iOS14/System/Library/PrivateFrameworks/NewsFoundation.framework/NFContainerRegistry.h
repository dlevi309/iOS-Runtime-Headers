/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFContainerRegistry.h>

@protocol NFContainerRegistry <NSObject>
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer; 
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer; 
@property (nonatomic,readonly) id swiftContainer; 
@property (nonatomic,readonly) id bridgedContainer; 
@property (nonatomic,readonly) id<NFCallbackRegistration> callback; 
@required
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id)bridgedContainer;
-(id<NFRegistrationContainer>)publicContainer;
-(id)swiftContainer;

@end


@protocol NFRegistrationContainer, NFCallbackRegistration;
@class NSString;

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {

	id<NFRegistrationContainer> _publicContainer;
	id<NFRegistrationContainer> _privateContainer;
	id _bridgedContainer;
	id _swiftContainer;
	id<NFCallbackRegistration> _callback;

}

@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,readonly) id swiftContainer;                                         //@synthesize swiftContainer=_swiftContainer - In the implementation block
@property (nonatomic,readonly) id bridgedContainer;                                       //@synthesize bridgedContainer=_bridgedContainer - In the implementation block
@property (nonatomic,readonly) id<NFCallbackRegistration> callback;                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id)bridgedContainer;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4 ;
-(id<NFRegistrationContainer>)publicContainer;
-(id)swiftContainer;
@end

