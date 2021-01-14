/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cleanup;
-(void)dealloc;
-(unsigned)dataSourceControlID;
-(void)notifyDeviceListChanged;
-(id)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

