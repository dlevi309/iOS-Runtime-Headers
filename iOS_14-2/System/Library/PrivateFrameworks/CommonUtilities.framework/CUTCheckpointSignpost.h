/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/

#import <CommonUtilities/CUTCheckpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSObject;

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding> {

	NSObject*<OS_os_log> _log;
	unsigned long long _signpostID;
	long long _scope;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) long long scope;                            //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(unsigned long long)signpostID;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_verifyMatchingName:(id)arg1 ;
@end

