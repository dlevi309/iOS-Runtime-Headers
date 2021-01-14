/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject {

	NSString* _pathname;
	NSMutableDictionary* _store;

}

@property (nonatomic,retain) NSString * pathname;                      //@synthesize pathname=_pathname - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
+(id)pathnameForStoreFilename:(id)arg1 ;
+(id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)arg1 ;
+(id)defaultPreferenceStore;
-(void)load;
-(void)removeAllItems;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSMutableDictionary *)store;
-(void)save;
-(id)objectForKey:(id)arg1 ;
-(NSString *)pathname;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStoreFilename:(id)arg1 ;
-(id)decodedObjectForKey:(id)arg1 ;
-(void)setPathname:(NSString *)arg1 ;
@end

