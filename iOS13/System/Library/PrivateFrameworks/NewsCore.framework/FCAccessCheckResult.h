/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCanAccess:(BOOL)arg1 blockedReason:(unsigned long long)arg2 ;
-(BOOL)canAccess;
-(unsigned long long)blockedReason;
@end

