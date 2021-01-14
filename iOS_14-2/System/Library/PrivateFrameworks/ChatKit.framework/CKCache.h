/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKCache.h>

@protocol CKCache <NSObject>
@required
-(id)objectForKey:(id)arg1;
-(void)removeAllObjects;
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
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

