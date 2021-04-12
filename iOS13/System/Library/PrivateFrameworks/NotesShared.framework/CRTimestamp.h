/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding> {

	NSUUID* _replica;
	long long _counter;

}

@property (nonatomic,retain) NSUUID * replica;                      //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long counter;                     //@synthesize counter=_counter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)counter;
-(id)tombstone;
-(id)shortDescription;
-(void)setDocument:(id)arg1 ;
-(void)setCounter:(long long)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(NSUUID *)replica;
-(void)encodeIntoProtobufTimestamp:(Timestamp*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufTimestamp:(const Timestamp*)arg1 decoder:(id)arg2 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(id)initWithReplica:(id)arg1 andCounter:(long long)arg2 ;
-(BOOL)isEqualToTimestamp:(id)arg1 ;
-(id)nextTimestampForReplica:(id)arg1 ;
-(id)nextTimestamp;
-(id)earlierTimestamp:(id)arg1 ;
-(id)laterTimestamp:(id)arg1 ;
@end

