/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {

	/*^block*/id changeListener;
	NSMutableArray* deviceList;
	opaque_pthread_mutex_t listLock;

}

@property (nonatomic,copy) id changeListener; 
+(id)newDeviceList;
+(id)defaultDeviceOfType:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(unsigned)dataSourceControlID;
-(void)notifyDeviceListChanged;
-(id)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

