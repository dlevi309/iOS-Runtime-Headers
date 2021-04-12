/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying> {

	long long _counter;
	double _modificationTime;
	NSUUID* _replicaID;

}

@property (assign,nonatomic) long long counter;                    //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) double modificationTime;              //@synthesize modificationTime=_modificationTime - In the implementation block
@property (nonatomic,retain) NSUUID * replicaID;                   //@synthesize replicaID=_replicaID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)counter;
-(void)update;
-(void)setCounter:(long long)arg1 ;
-(void)setModificationTime:(double)arg1 ;
-(void)setReplicaID:(NSUUID *)arg1 ;
-(id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3 ;
-(double)modificationTime;
-(NSUUID *)replicaID;
-(id)initWithDefaultValue;
@end

