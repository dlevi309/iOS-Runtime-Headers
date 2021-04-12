/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding> {

	unsigned char _source[16];
	unsigned char _uuid[16];
	unsigned long long _ct;

}

@property (readonly) const char* sourceUUID; 
@property (readonly) const char* UUID; 
@property (readonly) unsigned long long continuousTime; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const char*)UUID;
-(const char*)sourceUUID;
-(unsigned long long)continuousTime;
-(id)initWithSource:(const char*)arg1 bootUUID:(const char*)arg2 time:(unsigned long long)arg3 ;
@end

