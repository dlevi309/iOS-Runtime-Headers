/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface TTTodo : NSObject <NSCopying> {

	BOOL _done;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL done;                  //@synthesize done=_done - In the implementation block
+(id)todoWithIdentifier:(id)arg1 done:(BOOL)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSUUID *)uuid;
-(id)serialize;
-(BOOL)done;
-(void)saveToArchive:(Todo*)arg1 ;
-(id)initWithArchive:(const Todo*)arg1 ;
-(id)initWithIdentifier:(id)arg1 done:(BOOL)arg2 ;
-(id)todoWithDone:(BOOL)arg1 ;
@end

