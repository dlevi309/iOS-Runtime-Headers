/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(NSData *)managerData;
-(BOOL)isRepresentingDiscardedReplicaManager;
-(id)initWithManagerData:(id)arg1 version:(unsigned long long)arg2 ;
@end

