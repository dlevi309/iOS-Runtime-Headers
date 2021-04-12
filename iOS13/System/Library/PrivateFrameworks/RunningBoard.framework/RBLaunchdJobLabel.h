/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RBSProcessIdentity;

@interface RBLaunchdJobLabel : NSObject <NSCopying> {

	NSString* _prefix;
	RBSProcessIdentity* _identity;
	unsigned short _seed;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * prefix;                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) RBSProcessIdentity * identity;                //@synthesize identity=_identity - In the implementation block
@property (nonatomic,readonly) unsigned short seed;                               //@synthesize seed=_seed - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
+(BOOL)mayMatchStringRepresentation:(id)arg1 ;
+(id)newLabelWithIdentity:(id)arg1 ;
+(id)labelFromStringRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RBSProcessIdentity *)identity;
-(NSString *)stringRepresentation;
-(unsigned short)seed;
-(NSString *)prefix;
-(id)_initWithPrefix:(id)arg1 identity:(id)arg2 seed:(unsigned short)arg3 ;
-(id)_initWithDaemonIdentity:(id)arg1 ;
@end

