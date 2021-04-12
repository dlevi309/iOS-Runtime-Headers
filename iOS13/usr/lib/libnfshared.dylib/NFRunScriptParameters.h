/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NFRunScriptParameters : NSObject <NSSecureCoding> {

	BOOL _checkWhitelist;
	BOOL _initialSelectBeforeRun;
	BOOL _includeAPDUDuration;
	BOOL _deactivateAllApps;
	NSString* _seid;
	NSArray* _whitelistedAID;
	double _outTotalAPDUExecutionDuration;
	unsigned long long _outFinalSWStatus;

}

@property (retain) NSString * seid;                                   //@synthesize seid=_seid - In the implementation block
@property (assign) BOOL checkWhitelist;                               //@synthesize checkWhitelist=_checkWhitelist - In the implementation block
@property (retain) NSArray * whitelistedAID;                          //@synthesize whitelistedAID=_whitelistedAID - In the implementation block
@property (assign) BOOL initialSelectBeforeRun;                       //@synthesize initialSelectBeforeRun=_initialSelectBeforeRun - In the implementation block
@property (assign) BOOL includeAPDUDuration;                          //@synthesize includeAPDUDuration=_includeAPDUDuration - In the implementation block
@property (assign) BOOL deactivateAllApps;                            //@synthesize deactivateAllApps=_deactivateAllApps - In the implementation block
@property (assign) double outTotalAPDUExecutionDuration;              //@synthesize outTotalAPDUExecutionDuration=_outTotalAPDUExecutionDuration - In the implementation block
@property (assign) unsigned long long outFinalSWStatus;               //@synthesize outFinalSWStatus=_outFinalSWStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(NSString *)seid;
-(void)setOutFinalSWStatus:(unsigned long long)arg1 ;
-(void)setOutTotalAPDUExecutionDuration:(double)arg1 ;
-(BOOL)checkWhitelist;
-(void)setCheckWhitelist:(BOOL)arg1 ;
-(NSArray *)whitelistedAID;
-(void)setWhitelistedAID:(NSArray *)arg1 ;
-(BOOL)initialSelectBeforeRun;
-(void)setInitialSelectBeforeRun:(BOOL)arg1 ;
-(BOOL)includeAPDUDuration;
-(void)setIncludeAPDUDuration:(BOOL)arg1 ;
-(BOOL)deactivateAllApps;
-(void)setDeactivateAllApps:(BOOL)arg1 ;
-(double)outTotalAPDUExecutionDuration;
-(unsigned long long)outFinalSWStatus;
@end

