/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDialogResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCListenerEndpoint, NSString;

@interface WFShowActionInterfaceDialogResponse : WFDialogResponse <NSSecureCoding> {

	BOOL _unsupported;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSString* _userInterfaceType;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,readonly) NSString * userInterfaceType;                          //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (getter=isUnsupported,nonatomic,readonly) BOOL unsupported;                 //@synthesize unsupported=_unsupported - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isUnsupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCancelled:(BOOL)arg1 ;
-(BOOL)shouldDismissDialogInTransientMode;
-(id)initWithUnsupported:(BOOL)arg1 ;
-(NSString *)userInterfaceType;
-(id)initWithListenerEndpoint:(id)arg1 userInterfaceType:(id)arg2 ;
@end

