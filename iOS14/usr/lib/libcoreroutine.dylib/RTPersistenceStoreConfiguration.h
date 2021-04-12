/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, RTPersistenceStore;

@interface RTPersistenceStoreConfiguration : NSObject {

	BOOL _readOnly;
	NSString* _name;
	RTPersistenceStore* _store;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (getter=isReadOnly,readonly) BOOL readOnly;                //@synthesize readOnly=_readOnly - In the implementation block
@property (__weak,readonly) RTPersistenceStore * store;              //@synthesize store=_store - In the implementation block
-(BOOL)isReadOnly;
-(id)init;
-(RTPersistenceStore *)store;
-(NSString *)name;
-(id)initWithName:(id)arg1 readOnly:(BOOL)arg2 store:(id)arg3 ;
@end

