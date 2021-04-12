/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)resolutionTokenWithJSONObject:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setModificationTime:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDefaultValue;
-(void)update;
-(long long)counter;
-(id)description;
-(NSUUID *)replicaID;
-(double)modificationTime;
-(id)initWithCoder:(id)arg1 ;
-(void)setReplicaID:(NSUUID *)arg1 ;
-(id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3 ;
-(void)setCounter:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

