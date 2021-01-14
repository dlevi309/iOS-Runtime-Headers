/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIHostedWindowHostingHandle, NSArray, BSMachPortSendRight;

@interface _UIViewServiceControllerOperatorCreateResult : NSObject <NSSecureCoding> {

	int _preferredStatusBarVisibility;
	_UIHostedWindowHostingHandle* _serviceWindowHostingHandle;
	NSArray* _supportedInterfaceOrientations;
	long long _preferredStatusBarStyle;
	BSMachPortSendRight* _accessibilityServerPort;

}

@property (nonatomic,retain) _UIHostedWindowHostingHandle * serviceWindowHostingHandle;              //@synthesize serviceWindowHostingHandle=_serviceWindowHostingHandle - In the implementation block
@property (nonatomic,copy) NSArray * supportedInterfaceOrientations;                                 //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic) long long preferredStatusBarStyle;                                      //@synthesize preferredStatusBarStyle=_preferredStatusBarStyle - In the implementation block
@property (assign,nonatomic) int preferredStatusBarVisibility;                                       //@synthesize preferredStatusBarVisibility=_preferredStatusBarVisibility - In the implementation block
@property (nonatomic,retain) BSMachPortSendRight * accessibilityServerPort;                          //@synthesize accessibilityServerPort=_accessibilityServerPort - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)preferredStatusBarVisibility;
-(_UIHostedWindowHostingHandle *)serviceWindowHostingHandle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)supportedInterfaceOrientations;
-(void)setPreferredStatusBarVisibility:(int)arg1 ;
-(void)setServiceWindowHostingHandle:(_UIHostedWindowHostingHandle *)arg1 ;
-(BSMachPortSendRight *)accessibilityServerPort;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)setPreferredStatusBarStyle:(long long)arg1 ;
-(void)setAccessibilityServerPort:(BSMachPortSendRight *)arg1 ;
-(void)setSupportedInterfaceOrientations:(NSArray *)arg1 ;
@end

