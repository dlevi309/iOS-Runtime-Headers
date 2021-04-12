/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SUCorePolicy, SUCoreProgress, NSError;

@interface SUCoreUpdateParam : NSObject <NSSecureCoding> {

	long long _targetPhase;
	SUCorePolicy* _policy;
	SUCoreProgress* _downloadProgress;
	SUCoreProgress* _prepareProgress;
	long long _resultCode;
	NSError* _error;

}

@property (assign,nonatomic) long long targetPhase;                          //@synthesize targetPhase=_targetPhase - In the implementation block
@property (nonatomic,retain) SUCorePolicy * policy;                          //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) SUCoreProgress * downloadProgress;              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) SUCoreProgress * prepareProgress;               //@synthesize prepareProgress=_prepareProgress - In the implementation block
@property (assign,nonatomic) long long resultCode;                           //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)targetPhaseName:(long long)arg1 ;
-(id)initWithError:(id)arg1 ;
-(void)setPolicy:(SUCorePolicy *)arg1 ;
-(id)init;
-(SUCorePolicy *)policy;
-(long long)resultCode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setResultCode:(long long)arg1 ;
-(NSError *)error;
-(SUCoreProgress *)downloadProgress;
-(id)description;
-(id)summary;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)setDownloadProgress:(SUCoreProgress *)arg1 ;
-(id)initTargetPhase:(long long)arg1 policy:(id)arg2 downloadProgress:(id)arg3 prepareProgress:(id)arg4 resultCode:(long long)arg5 error:(id)arg6 ;
-(long long)targetPhase;
-(SUCoreProgress *)prepareProgress;
-(void)setTargetPhase:(long long)arg1 ;
-(void)setPrepareProgress:(SUCoreProgress *)arg1 ;
-(id)initTargetPhase:(long long)arg1 withPolicy:(id)arg2 ;
-(id)initWithDownloadProgress:(id)arg1 ;
-(id)initWithPrepareProgress:(id)arg1 ;
@end

