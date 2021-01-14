/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class NSString;


@protocol _GCDeviceClient
@property (getter=isInvalid,nonatomic,readonly) BOOL invalid; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry; 
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry; 
@required
-(BOOL)isInvalid;
-(NSString *)bundleIdentifier;
-(id<_GCIPCServiceRegistry>)IPCServiceRegistry;
-(id<_GCIPCObjectRegistry>)IPCObjectRegistry;
-(id)addInvalidationHandler:(/*^block*/id)arg1;

@end

