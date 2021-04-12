/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface TTVectorTimestamp : NSObject <NSCopying> {

	NSMutableDictionary* _clock;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)serialize;
-(unsigned long long)compareTo:(id)arg1 ;
-(id)clockElementForUUID:(id)arg1 ;
-(void)saveToArchive:(VectorTimestamp*)arg1 ;
-(void)setClock:(unsigned long long)arg1 forUUID:(id)arg2 ;
-(unsigned long long)clockForUUID:(id)arg1 ;
-(void)mergeWithTimestamp:(id)arg1 ;
-(id)allUUIDs;
-(void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3 ;
-(id)sortedUUIDs;
-(unsigned long long)subclockForUUID:(id)arg1 ;
-(void)incrementClockForUUID:(id)arg1 ;
-(id)initWithArchive:(const VectorTimestamp*)arg1 ;
@end

