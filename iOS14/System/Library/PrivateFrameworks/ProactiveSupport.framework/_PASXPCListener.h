/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol NSXPCListenerDelegate;
@class NSString;

@interface _PASXPCListener : NSObject {

	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	NSString* _displayName;

}

@property (nonatomic,readonly) id<NSXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
-(id)init;
-(id<NSXPCListenerDelegate>)delegate;
-(NSString *)serviceName;
-(id)initWithDelegate:(id)arg1 serviceName:(id)arg2 displayName:(id)arg3 ;
-(NSString *)displayName;
@end

