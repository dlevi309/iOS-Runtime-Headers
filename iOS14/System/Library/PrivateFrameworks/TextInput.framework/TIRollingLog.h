/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)currentEntries;
-(id)initWithMaxCount:(unsigned long long)arg1 ;
-(void)addEntry:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntries:(id)arg1 ;
@end

