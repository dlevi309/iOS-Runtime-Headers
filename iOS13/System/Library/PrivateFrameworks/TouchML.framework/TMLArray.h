/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableArray, NSArray;

@interface TMLArray : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSArray * array;                         //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)array;
-(void)removeAllObjects;
-(void)remove:(unsigned long long)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(void)append:(id)arg1 ;
-(void)set:(unsigned long long)arg1 value:(id)arg2 ;
-(id)get:(unsigned long long)arg1 ;
@end

