/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

