/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKCache.h>

@protocol CKCache <NSObject>
@required
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface CKCache : NSObject <CKCache> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
@end

