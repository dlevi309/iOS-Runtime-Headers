/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MSViewServiceHostProtocol.h>

@protocol MSViewServiceHostProtocol;
@class NSString;

@interface _MSRemoteViewController : _UIRemoteViewController <MSViewServiceHostProtocol> {

	id<MSViewServiceHostProtocol> _host;

}

@property (assign,nonatomic,__weak) id<MSViewServiceHostProtocol> host;              //@synthesize host=_host - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setHost:(id<MSViewServiceHostProtocol>)arg1 ;
-(id<MSViewServiceHostProtocol>)host;
-(void)requestDismiss;
@end

