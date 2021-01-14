/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <libobjc.A.dylib/UARPXPCConsumer.h>

@protocol UARPXPCConsumer;
@class NSString;

@interface UARPControllerExportedObject : NSObject <UARPXPCConsumer> {

	id<UARPXPCConsumer> _delegate;

}

@property (__weak,readonly) id<UARPXPCConsumer> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UARPXPCConsumer>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
@end

