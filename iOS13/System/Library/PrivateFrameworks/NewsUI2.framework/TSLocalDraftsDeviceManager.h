/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSLocalDraftsDeviceManagerType.h>

@interface TSLocalDraftsDeviceManager : NSObject <TSLocalDraftsDeviceManagerType> {

	 listener;
	 delegate;

}

@property (assign,__weak,nonatomic) id<TSLocalDraftsDelegate> delegate; 
-(id)init;
-(id<TSLocalDraftsDelegate>)delegate;
-(void)setDelegate:(id<TSLocalDraftsDelegate>)arg1 ;
@end

