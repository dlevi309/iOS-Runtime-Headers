/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SGDWorkQueueName : NSObject <NSCopying> {

	unsigned _timestamp32;
	unsigned _counter32;
	unsigned short _otherbits;

}

@property (assign,nonatomic) unsigned long long timestamp; 
@property (assign,nonatomic) unsigned long long counter; 
@property (assign,nonatomic) unsigned long long fails; 
@property (assign,nonatomic) unsigned long long state; 
+(BOOL)isValidFilename:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)fails;
-(unsigned long long)counter;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)state;
-(void)setCounter:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)queueItemId;
-(id)copyWithState:(unsigned long long)arg1 ;
-(id)pathInDirectory:(id)arg1 ;
-(void)setFails:(unsigned long long)arg1 ;
-(id)copyWithState:(unsigned long long)arg1 andFails:(unsigned long long)arg2 ;
@end

