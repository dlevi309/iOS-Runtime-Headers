/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TIRollingLog : NSObject <NSCopying> {

	NSMutableArray* _entries;
	unsigned long long _nextIndex;
	unsigned long long _count;
	unsigned long long _maxCount;

}

@property (nonatomic,readonly) NSArray * currentEntries; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)addEntries:(id)arg1 ;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(NSArray *)currentEntries;
@end

