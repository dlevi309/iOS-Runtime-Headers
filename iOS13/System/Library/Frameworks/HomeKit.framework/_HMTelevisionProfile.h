/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMTelevisionProfileDelegate;
@class NSArray;

@interface _HMTelevisionProfile : _HMAccessoryProfile {

	BOOL _mediaSourceDisplayOrderModifiable;
	NSArray* _mediaSourceDisplayOrder;
	id<_HMTelevisionProfileDelegate> _delegate;

}

@property (retain) NSArray * mediaSourceDisplayOrder;                      //@synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder - In the implementation block
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;               //@synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable - In the implementation block
@property (__weak) id<_HMTelevisionProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_HMTelevisionProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMTelevisionProfileDelegate>)arg1 ;
-(id)messageTargetUUID;
-(id)messageReceiveQueue;
-(void)_registerNotificationHandlers;
-(id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2 ;
-(id)messageDestination;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)_handleSourceDisplayOrderUpdated:(id)arg1 ;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1 ;
-(BOOL)isMediaSourceDisplayOrderModifiable;
-(void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

