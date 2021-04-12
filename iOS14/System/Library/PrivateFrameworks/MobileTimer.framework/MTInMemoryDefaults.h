/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTPersistence.h>

@class NSMutableDictionary, NSString;

@interface MTInMemoryDefaults : NSObject <MTPersistence> {

	NSMutableDictionary* _storage;

}

@property (nonatomic,retain) NSMutableDictionary * storage;              //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)storage;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

