/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface CRIndexElement : NSObject <NSCopying> {

	NSUUID* _replica;
	long long _integer;

}

@property (nonatomic,retain) NSUUID * replica;               //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long integer;              //@synthesize integer=_integer - In the implementation block
+(id)elementWithInteger:(long long)arg1 replica:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSUUID *)replica;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)setInteger:(long long)arg1 ;
-(long long)integer;
-(unsigned long long)hashValue;
-(id)initWithInteger:(long long)arg1 replica:(id)arg2 ;
@end

