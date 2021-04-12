/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_source, AXIPCServerClientRegistrationDelegate;
@class NSString, NSObject;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;
	NSObject*<OS_dispatch_source> _invalidationSource;
	id<AXIPCServerClientRegistrationDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned port;                                                        //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> invalidationSource;                     //@synthesize invalidationSource=_invalidationSource - In the implementation block
@property (assign,nonatomic,__weak) id<AXIPCServerClientRegistrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<AXIPCServerClientRegistrationDelegate>)delegate;
-(void)setDelegate:(id<AXIPCServerClientRegistrationDelegate>)arg1 ;
-(unsigned)port;
-(NSString *)identifier;
-(id)initWithPort:(unsigned)arg1 identifier:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)invalidationSource;
@end

