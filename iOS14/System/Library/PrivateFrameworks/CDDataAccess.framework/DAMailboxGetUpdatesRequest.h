/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxGetUpdatesRequest : DAMailboxRequest {

	int _maxSize;

}

@property (assign,nonatomic) int maxSize;              //@synthesize maxSize=_maxSize - In the implementation block
-(void)setMaxSize:(int)arg1 ;
-(id)description;
-(int)maxSize;
-(unsigned long long)hash;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

