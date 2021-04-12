/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol DirectoryWatcherDelegate;
#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface DirectoryWatcher : NSObject {

	id<DirectoryWatcherDelegate> delegate;
	int dirFD;
	int kq;
	CFFileDescriptorRef dirKQRef;

}

@property (assign,nonatomic) id<DirectoryWatcherDelegate> delegate; 
+(id)watchFolderWithPath:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<DirectoryWatcherDelegate>)delegate;
-(void)setDelegate:(id<DirectoryWatcherDelegate>)arg1 ;
-(BOOL)startMonitoringDirectory:(id)arg1 ;
-(void)kqueueFired;
@end

