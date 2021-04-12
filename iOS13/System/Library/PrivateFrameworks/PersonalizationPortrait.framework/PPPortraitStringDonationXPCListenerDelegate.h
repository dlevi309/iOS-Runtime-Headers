/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PPPortraitStringDonationProtocol;
@class NSString;

@interface PPPortraitStringDonationXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {

	id<PPPortraitStringDonationProtocol> _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithHandler:(id)arg1 ;
@end

