/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

#import <libobjc.A.dylib/NNMKDirectoryProvider.h>
@class NSString;


@protocol NNMKDirectoryProvider <NSObject>
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@required
-(NSString *)pairedDeviceRegistryPath;
-(void)setPairedDeviceRegistryPath:(id)arg1;

@end


@class NSString;

@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
+(void)removePairedDeviceRegistryPathFromUserDefaults;
-(NSString *)pairedDeviceRegistryPath;
-(void)setPairedDeviceRegistryPath:(NSString *)arg1 ;
@end

