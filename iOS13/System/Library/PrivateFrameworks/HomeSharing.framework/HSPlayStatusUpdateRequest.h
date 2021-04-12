/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSRequest.h>

@interface HSPlayStatusUpdateRequest : HSRequest {

	unsigned _interfaceID;
	unsigned _revisionID;

}

@property (nonatomic,readonly) unsigned interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) unsigned revisionID;               //@synthesize revisionID=_revisionID - In the implementation block
-(BOOL)isConcurrent;
-(double)timeoutInterval;
-(unsigned)revisionID;
-(unsigned)interfaceID;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithInterfaceID:(unsigned)arg1 revisionID:(unsigned)arg2 ;
@end

