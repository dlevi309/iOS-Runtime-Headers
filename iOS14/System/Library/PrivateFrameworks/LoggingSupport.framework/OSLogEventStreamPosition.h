/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(const char*)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)continuousTime;
-(id)initWithCoder:(id)arg1 ;
-(const char*)sourceUUID;
-(id)initWithSource:(const char*)arg1 bootUUID:(const char*)arg2 time:(unsigned long long)arg3 ;
@end

