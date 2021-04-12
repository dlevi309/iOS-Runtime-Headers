/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SUCorePolicy *)policy;
-(void)setPolicy:(SUCorePolicy *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)summary;
-(void)setResultCode:(long long)arg1 ;
-(SUCoreProgress *)downloadProgress;
-(void)setDownloadProgress:(SUCoreProgress *)arg1 ;
-(long long)resultCode;
-(id)initTargetPhase:(long long)arg1 policy:(id)arg2 downloadProgress:(id)arg3 prepareProgress:(id)arg4 resultCode:(long long)arg5 error:(id)arg6 ;
-(long long)targetPhase;
-(SUCoreProgress *)prepareProgress;
-(void)setTargetPhase:(long long)arg1 ;
-(void)setPrepareProgress:(SUCoreProgress *)arg1 ;
-(id)initTargetPhase:(long long)arg1 withPolicy:(id)arg2 ;
-(id)initWithDownloadProgress:(id)arg1 ;
-(id)initWithPrepareProgress:(id)arg1 ;
@end

