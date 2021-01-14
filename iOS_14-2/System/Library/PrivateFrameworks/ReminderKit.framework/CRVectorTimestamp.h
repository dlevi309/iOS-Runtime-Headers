/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSMutableDictionary, NSString;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding> {

	NSMutableDictionary* _clock;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)compare:(id)arg1 ;
-(void)encodeIntoProtobufTimestamp:(VectorTimestamp*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufTimestamp:(const VectorTimestamp*)arg1 decoder:(id)arg2 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(id)init;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)removeUUID:(id)arg1 ;
-(void)minusVectorTimestamp:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setDocument:(id)arg1 ;
-(id)shortDescription;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(id)timestampForReplica:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(NSString *)description;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)allUUIDs;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

