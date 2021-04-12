/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@interface EFPair : NSObject <NSCopying> {

	id<NSObject> _first;
	id<NSObject> _second;

}

@property (nonatomic,readonly) id<NSObject> first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) id<NSObject> second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject>)second;
-(id<NSObject>)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqualToPair:(id)arg1 ;
@end

