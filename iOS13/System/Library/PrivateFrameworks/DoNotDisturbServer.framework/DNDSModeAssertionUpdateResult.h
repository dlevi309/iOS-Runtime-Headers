/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying> {

	NSArray* _assertions;
	NSArray* _invalidations;

}

@property (nonatomic,copy,readonly) NSArray * assertions;                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidations;              //@synthesize invalidations=_invalidations - In the implementation block
+(id)emptyResult;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)assertions;
-(NSArray *)invalidations;
-(id)resultCombiningWithResult:(id)arg1 ;
-(id)initWithAssertions:(id)arg1 invalidations:(id)arg2 ;
@end

