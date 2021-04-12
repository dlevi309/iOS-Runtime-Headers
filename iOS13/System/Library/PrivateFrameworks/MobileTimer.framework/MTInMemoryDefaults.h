/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)storage;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setStorage:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 defaultValue:(id)arg2 ;
@end

