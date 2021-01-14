/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSRequest.h>

@interface HSUpdateRequest : HSRequest {

	long long _connectionType;

}
+(id)requestWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(double)timeoutInterval;
-(BOOL)isConcurrent;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 connectionType:(long long)arg3 ;
-(id)_bodyDataForDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
@end

