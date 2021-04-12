/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PSYTestInput, NSUUID;

@interface PSYSyncOptions : NSObject <NSSecureCoding> {

	BOOL _dryRun;
	BOOL _terminateDuringDryRun;
	PSYTestInput* _testInput;
	NSUUID* _pairingIdentifier;
	NSUUID* _sessionIdentifier;
	unsigned long long _syncSessionType;

}

@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL terminateDuringDryRun;                      //@synthesize terminateDuringDryRun=_terminateDuringDryRun - In the implementation block
@property (nonatomic,retain) PSYTestInput * testInput;                        //@synthesize testInput=_testInput - In the implementation block
@property (nonatomic,retain) NSUUID * pairingIdentifier;                      //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;              //@synthesize syncSessionType=_syncSessionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)pairingIdentifier;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)sessionIdentifier;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)dryRun;
-(unsigned long long)syncSessionType;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(PSYTestInput *)testInput;
-(BOOL)terminateDuringDryRun;
-(void)setTerminateDuringDryRun:(BOOL)arg1 ;
-(void)setTestInput:(PSYTestInput *)arg1 ;
@end

