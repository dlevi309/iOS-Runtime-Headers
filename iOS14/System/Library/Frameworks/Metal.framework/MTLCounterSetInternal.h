/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <libobjc.A.dylib/MTLCounterSet.h>

@class NSString, NSArray;

@interface MTLCounterSetInternal : NSObject <MTLCounterSet> {

	NSString* _name;
	NSString* _description;
	NSArray* _counters;

}

@property (copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * counters;                       //@synthesize counters=_counters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 description:(id)arg2 counters:(id)arg3 ;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(NSArray *)counters;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

