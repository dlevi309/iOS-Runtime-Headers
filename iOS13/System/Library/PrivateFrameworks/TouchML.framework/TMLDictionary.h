/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface TMLDictionary : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;               //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * keys; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSArray *)keys;
-(void)set:(id)arg1 value:(id)arg2 ;
-(id)get:(id)arg1 ;
-(id)union:(id)arg1 ;
@end

