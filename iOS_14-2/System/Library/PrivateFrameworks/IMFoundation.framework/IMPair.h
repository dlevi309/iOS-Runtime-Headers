/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IMPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (retain) id first;               //@synthesize first=_first - In the implementation block
@property (retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(void)setFirst:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

