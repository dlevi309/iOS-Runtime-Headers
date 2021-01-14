/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEODataURLSessionTaskIdentifier : NSObject <NSCopying> {

	long long _sessionIdentity;
	unsigned long long _taskIdentifier;
	unsigned long long _hash;

}
-(id)description;
-(unsigned long long)hash;
-(id)initWithSession:(id)arg1 task:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

