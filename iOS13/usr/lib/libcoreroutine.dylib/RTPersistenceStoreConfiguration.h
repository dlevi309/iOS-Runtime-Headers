/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)name;
-(RTPersistenceStore *)store;
-(BOOL)isReadOnly;
-(id)initWithName:(id)arg1 readOnly:(BOOL)arg2 store:(id)arg3 ;
@end

