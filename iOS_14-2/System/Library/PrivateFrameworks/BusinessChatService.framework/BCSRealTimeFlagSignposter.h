/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BCSRealTimeSignposter.h>
#import <libobjc.A.dylib/BCSRealTimeFlagMeasurementHandler.h>

@class NSString;

@interface BCSRealTimeFlagSignposter : BCSRealTimeSignposter <BCSRealTimeFlagMeasurementHandler> {

	long long _signposterType;

}

@property (assign,nonatomic) long long signposterType;              //@synthesize signposterType=_signposterType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)signposterForBCSType:(long long)arg1 ;
+(id)signposterForShardIdentifier:(id)arg1 ;
+(id)signposterForItemIdentifier:(id)arg1 ;
-(long long)signposterType;
-(void)_handleConfigCacheHitWithFlag:(BOOL)arg1 ;
-(void)_handleShardCacheHitWithFlag:(BOOL)arg1 ;
-(void)_handleItemCacheHitWithFlag:(BOOL)arg1 ;
-(void)flagMeasurementDidChange:(BOOL)arg1 forMeasurement:(id)arg2 ;
-(void)setSignposterType:(long long)arg1 ;
@end

