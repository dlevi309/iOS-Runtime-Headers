/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet;

@interface FPProcessGroup : NSObject <NSCopying> {

	BOOL _immutable;
	NSMutableSet* _processes;
	unsigned long long _hashValue;

}

@property (assign,nonatomic) BOOL immutable;                            //@synthesize immutable=_immutable - In the implementation block
@property (nonatomic,retain) NSMutableSet * processes;                  //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)freeze;
-(BOOL)immutable;
-(void)setImmutable:(BOOL)arg1 ;
-(unsigned long long)hashValue;
-(NSMutableSet *)processes;
-(void)addProcess:(id)arg1 ;
-(void)setProcesses:(NSMutableSet *)arg1 ;
-(void)setHashValue:(unsigned long long)arg1 ;
@end

