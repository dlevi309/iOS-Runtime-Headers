/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NNMKDirectoryProvider.h>
@class NSString;


@protocol NNMKDirectoryProvider <NSObject>
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@required
-(void)setPairedDeviceRegistryPath:(id)arg1;
-(NSString *)pairedDeviceRegistryPath;

@end


@class NSString;

@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>

@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removePairedDeviceRegistryPathFromUserDefaults;
-(void)setPairedDeviceRegistryPath:(NSString *)arg1 ;
-(NSString *)pairedDeviceRegistryPath;
@end

