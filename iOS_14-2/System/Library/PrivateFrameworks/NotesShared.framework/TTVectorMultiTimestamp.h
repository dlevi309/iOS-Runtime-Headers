/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TTVectorMultiTimestamp : NSObject <NSCopying> {

	NSArray* _timestamps;

}

@property (nonatomic,retain) NSArray * timestamps;                 //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,readonly) BOOL isDocumentShared; 
-(id)serialize;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(NSArray *)timestamps;
-(id)sortedUUIDs;
-(id)initWithTimestamps:(id)arg1 ;
-(BOOL)isDocumentShared;
-(id)clockElementForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)setTimestamps:(NSArray *)arg1 ;
-(id)initWithData:(id)arg1 andCapacity:(unsigned long long)arg2 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 andCapacity:(unsigned long long)arg2 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(id)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

