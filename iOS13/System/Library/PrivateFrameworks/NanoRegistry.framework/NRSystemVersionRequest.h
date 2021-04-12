/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <libobjc.A.dylib/NRSystemVersionRequest.h>

@protocol NRSystemVersionRequest <NSObject>
@required
-(void)sendVersionRequestToCompanion;

@end


@class NSString;

@interface NRSystemVersionRequest : NSObject <NRSystemVersionRequest>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)connection;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)sendVersionRequestToCompanion;
@end

