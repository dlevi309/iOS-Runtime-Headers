/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/

#import <MechanismBase/MechanismBase.h>

@class NSMutableArray, NSArray;

@interface MechanismKofN : MechanismBase {

	NSMutableArray* _runningMechanisms;
	BOOL _finishing;
	BOOL _serial;
	BOOL _AND;
	BOOL _OR;
	unsigned long long _k;
	unsigned long long _n;
	NSArray* _submechanisms;

}

@property (k,nonatomic,readonly) unsigned long long k;                   //@synthesize k=_k - In the implementation block
@property (n,nonatomic,readonly) unsigned long long n;                   //@synthesize n=_n - In the implementation block
@property (nonatomic,readonly) NSArray * submechanisms;                  //@synthesize submechanisms=_submechanisms - In the implementation block
@property (getter=isSerial,nonatomic,readonly) BOOL serial;              //@synthesize serial=_serial - In the implementation block
@property (getter=isAND,nonatomic,readonly) BOOL AND;                    //@synthesize AND=_AND - In the implementation block
@property (getter=isOR,nonatomic,readonly) BOOL OR;                      //@synthesize OR=_OR - In the implementation block
+(id)mechanismWithK:(unsigned long long)arg1 ofSubmechanisms:(id)arg2 serial:(BOOL)arg3 request:(id)arg4 preserveStandaloneReorganizers:(BOOL)arg5 ;
+(id)mechanismWithK:(unsigned long long)arg1 ofSubmechanisms:(id)arg2 serial:(BOOL)arg3 request:(id)arg4 ;
-(unsigned long long)n;
-(unsigned long long)k;
-(BOOL)isOR;
-(id)cachedExternalizationDelegate;
-(BOOL)isAND;
-(id)description;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(id)availabilityEventsForPurpose:(long long)arg1 ;
-(BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)bestEffortAvailableMechanismForRequest:(id)arg1 error:(id*)arg2 ;
-(id)findMechanismWithEventIdentifier:(long long)arg1 ;
-(BOOL)requiresUiWithEventProcessing:(id)arg1 ;
-(id)additionalControllerInternalInfoForPolicy:(long long)arg1 ;
-(id)initWithK:(unsigned long long)arg1 ofSubmechanisms:(id)arg2 serial:(BOOL)arg3 request:(id)arg4 ;
-(id)_adjustStringForNestedDescription:(id)arg1 ;
-(void)_runSubmechanismAtIndex:(long long)arg1 hints:(id)arg2 eventsDelegate:(id)arg3 succeeded:(long long)arg4 failed:(long long)arg5 results:(id)arg6 reply:(/*^block*/id)arg7 ;
-(NSArray *)submechanisms;
-(BOOL)isSerial;
@end

