/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SFAirDropViewServiceHostProtocol.h>

@protocol SFAirDropViewServiceHostProtocol;
@class NSString;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol> {

	id<SFAirDropViewServiceHostProtocol> _airDropHost;

}

@property (assign,nonatomic,__weak) id<SFAirDropViewServiceHostProtocol> airDropHost;              //@synthesize airDropHost=_airDropHost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)airDropViewServiceDidSuccessfullyStartTransfer;
-(void)airDropViewServiceDidSuccessfullyCompleteTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)setAirDropHost:(id<SFAirDropViewServiceHostProtocol>)arg1 ;
-(id<SFAirDropViewServiceHostProtocol>)airDropHost;
-(id)airDropExtensionService;
@end

