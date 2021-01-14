/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck
*/


@interface DCAppAttestService : NSObject

@property (getter=isSupported,readonly) BOOL supported; 
+(id)sharedService;
-(BOOL)isSupported;
-(void)generateKeyWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isSupportedReturningError:(id*)arg1 ;
-(id)_loadAppUUID;
-(void)_saveAppUUID:(id)arg1 ;
-(id)_rewrapAsDCError:(id)arg1 ;
-(void)attestKey:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateAssertion:(id)arg1 clientDataHash:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

