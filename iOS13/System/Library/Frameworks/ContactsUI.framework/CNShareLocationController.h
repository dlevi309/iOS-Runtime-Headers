/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSSet *)handles;
-(void)perform:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setHandles:(NSSet *)arg1 ;
-(FMFSession *)fmfSession;
-(id)initWithIDSAvailabilityProvider:(id)arg1 ;
-(id)initWithIDSAvailabilityProvider:(id)arg1 fmfSession:(id)arg2 schedulerProvider:(id)arg3 ;
-(BOOL)canShare;
-(BOOL)isSharing;
-(void)shareLocationUntilEndDate:(id)arg1 ;
-(void)stopSharingLocation;
-(id)endOfDayDate;
-(void)initiateIDSRequest;
-(id)callerID:(id*)arg1 ;
-(id)callerIDFuture;
-(void)notifySharingStatusDidChange;
-(NSObject*<CNShareLocationProtocol>)shareLocationDelegate;
-(void)setShareLocationDelegate:(NSObject*<CNShareLocationProtocol>)arg1 ;
-(void)setFmfSession:(FMFSession *)arg1 ;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id<CNCancelable>)bestPropertyCancelable;
-(void)setBestPropertyCancelable:(id<CNCancelable>)arg1 ;
-(CNFuture *)bestPropertyFuture;
-(void)setBestPropertyFuture:(CNFuture *)arg1 ;
@end

