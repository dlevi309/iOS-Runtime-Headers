/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {

	long long _totalSyncOperations;
	long long _failedSyncOperations;

}
+(BOOL)supportsSecureCoding;
-(void)clear;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)backoffRatio;
-(void)newSyncOperationWithError:(id)arg1 ;
@end

