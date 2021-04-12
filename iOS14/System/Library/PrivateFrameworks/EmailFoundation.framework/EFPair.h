/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NSObject>)second;
-(id<NSObject>)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqualToPair:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

