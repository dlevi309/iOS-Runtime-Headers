/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)keys;
-(id)get:(id)arg1 ;
-(id)init;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)union:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)removeAllObjects;
-(void)set:(id)arg1 value:(id)arg2 ;
@end

