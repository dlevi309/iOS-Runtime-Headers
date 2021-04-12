/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/FMFSessionDelegate.h>

@protocol CNShareLocationProtocol, CNCancelable, CNSchedulerProvider;
@class CNContact, NSObject, FMFSession, NSSet, CNUIIDSAvailabilityProvider, CNFuture, NSString;

@interface CNShareLocationController : NSObject <FMFSessionDelegate> {

	CNContact* _contact;
	NSObject*<CNShareLocationProtocol> _shareLocationDelegate;
	FMFSession* _fmfSession;
	NSSet* _handles;
	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;
	id<CNCancelable> _bestPropertyCancelable;
	CNFuture* _bestPropertyFuture;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,retain) FMFSession * fmfSession;                                                      //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,retain) NSSet * handles;                                                              //@synthesize handles=_handles - In the implementation block
@property (nonatomic,readonly) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;                      //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
@property (nonatomic,retain) id<CNCancelable> bestPropertyCancelable;                                      //@synthesize bestPropertyCancelable=_bestPropertyCancelable - In the implementation block
@property (nonatomic,retain) CNFuture * bestPropertyFuture;                                                //@synthesize bestPropertyFuture=_bestPropertyFuture - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) BOOL canShare; 
@property (nonatomic,readonly) BOOL isSharing; 
@property (assign,nonatomic,__weak) NSObject*<CNShareLocationProtocol> shareLocationDelegate;              //@synthesize shareLocationDelegate=_shareLocationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fmfHandleFromContactProperty:(id)arg1 ;
+(id)fmfHandlesFromContact:(id)arg1 ;
-(void)setHandles:(NSSet *)arg1 ;
-(CNContact *)contact;
-(NSSet *)handles;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setContact:(CNContact *)arg1 ;
-(BOOL)canShare;
-(BOOL)isSharing;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id)callerID:(id*)arg1 ;
-(FMFSession *)fmfSession;
-(void)perform:(id)arg1 ;
-(void)setFmfSession:(FMFSession *)arg1 ;
-(id)endOfDayDate;
-(id)callerIDFuture;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(void)shareLocationUntilEndDate:(id)arg1 ;
-(void)initiateIDSRequest;
-(id)initWithIDSAvailabilityProvider:(id)arg1 fmfSession:(id)arg2 schedulerProvider:(id)arg3 ;
-(void)stopSharingLocation;
-(void)notifySharingStatusDidChange;
-(NSObject*<CNShareLocationProtocol>)shareLocationDelegate;
-(void)setShareLocationDelegate:(NSObject*<CNShareLocationProtocol>)arg1 ;
-(id<CNCancelable>)bestPropertyCancelable;
-(void)setBestPropertyCancelable:(id<CNCancelable>)arg1 ;
-(CNFuture *)bestPropertyFuture;
-(void)setBestPropertyFuture:(CNFuture *)arg1 ;
@end

