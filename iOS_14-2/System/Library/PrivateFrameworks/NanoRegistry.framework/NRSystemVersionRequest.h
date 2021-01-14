/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)sendVersionRequestToCompanion;
@end

