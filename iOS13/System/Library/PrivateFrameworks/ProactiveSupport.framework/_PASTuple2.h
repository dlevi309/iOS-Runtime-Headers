/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface _PASTuple2 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
-(NSObject *)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqualToTuple2:(id)arg1 ;
@end

