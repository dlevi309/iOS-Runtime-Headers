/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <ContactsDonation/ContactsDonation-Structs.h>
#import <libobjc.A.dylib/CNDSIMCardMonitor.h>

@protocol CNDSIMCardMonitor <NSObject>
@required
-(id)addInfoChangeHandler:(/*^block*/id)arg1;

@end


@protocol CNDCoreTelephonyServices, CNCancelable, OS_dispatch_queue;
@class CoreTelephonyClient, CNReplaySubject, NSObject, NSString;

@interface CNDSIMCardMonitor : NSObject <CNDSIMCardMonitor> {

	CoreTelephonyClient* _coreTelephonyClient;
	id<CNDCoreTelephonyServices> _coreTelephonyServices;
	CNReplaySubject* _subject;
	id<CNCancelable> _subjectToken;
	CTServerConnectionRef _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}

@property (nonatomic,readonly) CoreTelephonyClient * coreTelephonyClient;                       //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,readonly) id<CNDCoreTelephonyServices> coreTelephonyServices;              //@synthesize coreTelephonyServices=_coreTelephonyServices - In the implementation block
@property (nonatomic,readonly) CNReplaySubject * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) id<CNCancelable> subjectToken;                                     //@synthesize subjectToken=_subjectToken - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef serverConnection;                            //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverConnectionQueue;                //@synthesize serverConnectionQueue=_serverConnectionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)os_log;
+(id)continuousPhoneNumberObservableWithCoreTelephonyClient:(id)arg1 services:(id)arg2 serverConnection:(CTServerConnectionRef)arg3 ;
+(id)phoneNumberChangedObservableWithCoreTelephonyServices:(id)arg1 serverConnection:(CTServerConnectionRef)arg2 ;
+(id)phoneNumberObservableWithCoreTelephonyClient:(id)arg1 ;
+(void)infoWithClient:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)infoWithCompletion:(/*^block*/id)arg1 ;
-(CNReplaySubject *)subject;
-(CoreTelephonyClient *)coreTelephonyClient;
-(CTServerConnectionRef)serverConnection;
-(id)init;
-(void)setSubjectToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)subjectToken;
-(void)setServerConnection:(CTServerConnectionRef)arg1 ;
-(void)dealloc;
-(id)initWithCoreTelephonyClient:(id)arg1 services:(id)arg2 ;
-(void)configureStateIfNecessary;
-(void)nts_configureConnectionIfNecessary;
-(void)nts_configureSubjectIfNecessary;
-(void)setServerConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CNDCoreTelephonyServices>)coreTelephonyServices;
-(NSObject*<OS_dispatch_queue>)serverConnectionQueue;
-(id)addInfoChangeHandler:(/*^block*/id)arg1 ;
@end

