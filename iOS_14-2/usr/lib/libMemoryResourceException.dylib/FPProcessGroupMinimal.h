/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSMutableSet;

@interface FPProcessGroupMinimal : NSObject {

	NSMutableSet* _processes;
	unsigned long long _hashValue;

}

@property (nonatomic,retain) NSMutableSet * processes;                  //@synthesize processes=_processes - In the implementation block
@property (assign,nonatomic) unsigned long long hashValue;              //@synthesize hashValue=_hashValue - In the implementation block
-(id)immutableCopy;
-(id)init;
-(NSMutableSet *)processes;
-(id)description;
-(unsigned long long)hashValue;
-(void)setHashValue:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)addProcess:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setProcesses:(NSMutableSet *)arg1 ;
@end

