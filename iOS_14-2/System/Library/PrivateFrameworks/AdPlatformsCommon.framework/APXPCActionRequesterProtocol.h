/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

@class NSUUID, Protocol;


@protocol APXPCActionRequesterProtocol <NSObject>
@property (nonatomic,readonly) NSUUID * delegateID; 
@property (nonatomic,readonly) id exportedObject; 
@property (nonatomic,readonly) Protocol * exportedInterface; 
@optional
-(id)exportedObject;
-(Protocol *)exportedInterface;
-(void)extendCollectionClassesForExportedInterface:(id)arg1;
-(void)extendCollectionClassesForRemoteInterface:(id)arg1;

@required
+(id)machService;
+(BOOL)canShareConnection;
-(void)connectionInvalidated;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(NSUUID *)delegateID;

@end

