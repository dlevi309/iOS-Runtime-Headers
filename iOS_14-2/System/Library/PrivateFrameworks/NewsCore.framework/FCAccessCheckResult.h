/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCAccessCheckResult : NSObject <NSCopying> {

	BOOL _canAccess;
	unsigned long long _blockedReason;

}

@property (nonatomic,readonly) BOOL canAccess;                                //@synthesize canAccess=_canAccess - In the implementation block
@property (nonatomic,readonly) unsigned long long blockedReason;              //@synthesize blockedReason=_blockedReason - In the implementation block
-(BOOL)canAccess;
-(id)init;
-(unsigned long long)blockedReason;
-(id)initWithCanAccess:(BOOL)arg1 blockedReason:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

