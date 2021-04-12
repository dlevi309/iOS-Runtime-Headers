/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)assertions;
-(NSArray *)invalidations;
-(id)initWithAssertions:(id)arg1 invalidations:(id)arg2 ;
-(id)resultCombiningWithResult:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

