/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(long long)integer;
-(NSUUID *)replica;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)setInteger:(long long)arg1 ;
-(unsigned long long)hashValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithInteger:(long long)arg1 replica:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

