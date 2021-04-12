/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@protocol MFMailWebProcessProxy;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface MFWebViewDictionary : NSMutableDictionary {

	NSMutableDictionary* _storage;
	id<MFMailWebProcessProxy> _webProcessProxy;
	NSMutableSet* _changedKeys;
	BOOL _requiresResynchronization;
	NSString* _javascriptName;

}

@property (nonatomic,readonly) NSString * javascriptName;              //@synthesize javascriptName=_javascriptName - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)synchronize;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MF6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(id)allKeysForObject:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(void)_setRequiresSynchronization;
-(void)_updateRemoteInstance;
-(void)registerWithWebView:(id)arg1 javascriptName:(id)arg2 ;
-(NSString *)javascriptName;
@end

