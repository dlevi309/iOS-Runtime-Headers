/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding> {

	NSData* _managerData;
	unsigned long long _version;

}

@property (nonatomic,readonly) BOOL isRepresentingDiscardedReplicaManager; 
@property (nonatomic,readonly) NSData * managerData;                                    //@synthesize managerData=_managerData - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)serializedDataRepresentingDiscardedReplicaManager;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)managerData;
-(BOOL)isRepresentingDiscardedReplicaManager;
-(id)initWithManagerData:(id)arg1 version:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(BOOL)isEqual:(id)arg1 ;
@end

