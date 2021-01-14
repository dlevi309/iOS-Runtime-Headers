/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2AccessoryServerTransportBase.h>
#import <libobjc.A.dylib/HAP2AccessoryServerTransport.h>

@protocol HAP2AccessoryServerTransportDelegate;
@class NSString;

@interface HAP2AccessoryServerTransportBaseWithDelegate : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransport> {

	id<HAP2AccessoryServerTransportDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HAP2AccessoryServerTransportDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) double maxRequestTimeout; 
@property (nonatomic,readonly) id<HAP2AccessoryServerTransportCommon> underlyingTransport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HAP2AccessoryServerTransportDelegate>)delegate;
-(void)setDelegate:(id<HAP2AccessoryServerTransportDelegate>)arg1 ;
-(void)didChangeStateWithError:(id)arg1 ;
@end

