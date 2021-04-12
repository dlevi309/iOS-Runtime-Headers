/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {

	unsigned long long _onFlags;
	unsigned long long _offFlags;

}

@property (assign,nonatomic) unsigned long long onFlags;               //@synthesize onFlags=_onFlags - In the implementation block
@property (assign,nonatomic) unsigned long long offFlags;              //@synthesize offFlags=_offFlags - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3 ;
-(void)setOnFlags:(unsigned long long)arg1 ;
-(void)setOffFlags:(unsigned long long)arg1 ;
-(unsigned long long)onFlags;
-(unsigned long long)offFlags;
@end

