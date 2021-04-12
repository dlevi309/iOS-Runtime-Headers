/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)load;
-(id)objectForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllItems;
-(void)save;
-(NSMutableDictionary *)store;
-(void)setStore:(NSMutableDictionary *)arg1 ;
-(NSString *)pathname;
-(id)initWithStoreFilename:(id)arg1 ;
-(id)decodedObjectForKey:(id)arg1 ;
-(void)setPathname:(NSString *)arg1 ;
@end

