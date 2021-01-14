/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, RBSProcessExitStatus, RBSTerminateContext, NSString;

@interface RBSProcessExitContext : NSObject <RBSXPCSecureCoding, NSSecureCoding> {

	int _legacyCode;
	NSDate* _timestamp;
	long long _type;
	RBSProcessExitStatus* _status;
	RBSTerminateContext* _terminationContext;

}

@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) RBSProcessExitStatus * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) RBSTerminateContext * terminationContext;              //@synthesize terminationContext=_terminationContext - In the implementation block
@property (nonatomic,readonly) int legacyCode;                                      //@synthesize legacyCode=_legacyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsRBSXPCSecureCoding;
+(id)exitContextForNamespace:(unsigned)arg1 code:(unsigned long long)arg2 wait4Status:(int)arg3 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(RBSTerminateContext *)terminationContext;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(int)legacyCode;
-(NSString *)debugDescription;
-(void)setType:(long long)arg1 ;
-(NSString *)description;
-(void)setTerminationContext:(RBSTerminateContext *)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(RBSProcessExitStatus *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(RBSProcessExitStatus *)status;
@end

