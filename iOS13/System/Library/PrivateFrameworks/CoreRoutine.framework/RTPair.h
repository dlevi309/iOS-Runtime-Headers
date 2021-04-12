/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)firstObject;
-(id)initWithFirstObject:(id)arg1 secondObject:(id)arg2 ;
-(id)secondObject;
@end

