/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(void)setMaxSize:(int)arg1 ;
-(id)description;
-(int)maxSize;
-(unsigned long long)hash;
-(id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

