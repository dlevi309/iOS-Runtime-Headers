/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFContainerRegistry.h>

@protocol NFContainerRegistry <NSObject>
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer; 
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer; 
@property (nonatomic,readonly) id<NFCallbackRegistration> callback; 
@required
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id<NFRegistrationContainer>)publicContainer;

@end


@protocol NFRegistrationContainer, NFCallbackRegistration;
@class NSString;

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {

	id<NFRegistrationContainer> _publicContainer;
	id<NFRegistrationContainer> _privateContainer;
	id<NFCallbackRegistration> _callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,readonly) id<NFCallbackRegistration> callback;                       //@synthesize callback=_callback - In the implementation block
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 callback:(id)arg3 ;
-(id<NFRegistrationContainer>)publicContainer;
@end

