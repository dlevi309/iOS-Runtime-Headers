/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)messageTargetUUID;
-(id)messageReceiveQueue;
-(id<_HMTelevisionProfileDelegate>)delegate;
-(void)setDelegate:(id<_HMTelevisionProfileDelegate>)arg1 ;
-(id)messageDestination;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)_handleSourceDisplayOrderUpdated:(id)arg1 ;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1 ;
-(BOOL)isMediaSourceDisplayOrderModifiable;
-(void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2 ;
-(void)_registerNotificationHandlers;
@end

