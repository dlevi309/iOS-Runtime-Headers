/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {

	unsigned long long _onFlags;
	unsigned long long _offFlags;

}

@property (assign,nonatomic) unsigned long long onFlags;               //@synthesize onFlags=_onFlags - In the implementation block
@property (assign,nonatomic) unsigned long long offFlags;              //@synthesize offFlags=_offFlags - In the implementation block
-(unsigned long long)onFlags;
-(id)description;
-(unsigned long long)hash;
-(void)setOnFlags:(unsigned long long)arg1 ;
-(void)setOffFlags:(unsigned long long)arg1 ;
-(id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3 ;
-(unsigned long long)offFlags;
-(BOOL)isEqual:(id)arg1 ;
@end

