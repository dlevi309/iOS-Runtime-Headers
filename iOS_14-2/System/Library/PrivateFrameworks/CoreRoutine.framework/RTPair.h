/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTPair : NSObject <NSCopying, NSSecureCoding> {

	id _firstObject;
	id _secondObject;

}

@property (nonatomic,readonly) id firstObject;               //@synthesize firstObject=_firstObject - In the implementation block
@property (nonatomic,readonly) id secondObject;              //@synthesize secondObject=_secondObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)getClusterClassOfObject:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)firstObject;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)secondObject;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

