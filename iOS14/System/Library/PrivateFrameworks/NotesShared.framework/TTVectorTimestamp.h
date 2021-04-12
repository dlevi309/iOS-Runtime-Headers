/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {

	NSMutableDictionary* _clock;

}
-(id)serialize;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(id)init;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)compareTo:(id)arg1 ;
-(id)description;
-(id)allUUIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

