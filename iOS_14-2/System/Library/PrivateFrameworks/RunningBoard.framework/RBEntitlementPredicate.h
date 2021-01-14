/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RBEntitlementPredicate : NSObject <NSCopying> {

	unsigned long long _count;

}

@property (readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)predicateForObject:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4 ;
-(id)allEntitlements;
-(unsigned long long)count;
-(BOOL)matchesEntitlements:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

