/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableArray, NSArray;

@interface TMLArray : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSArray * array;                         //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)remove:(unsigned long long)arg1 ;
-(id)get:(unsigned long long)arg1 ;
-(id)init;
-(NSArray *)array;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)append:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)set:(unsigned long long)arg1 value:(id)arg2 ;
@end

