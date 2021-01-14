/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKKeyObjectStoring;
@class NSString, NSObject;

@interface CRKUserDefaultsObject : NSObject {

	NSString* _key;
	NSObject*<CRKKeyObjectStoring> _store;

}

@property (nonatomic,readonly) NSObject*<CRKKeyObjectStoring> store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (copy) id value; 
-(NSObject*<CRKKeyObjectStoring>)store;
-(id)initWithKey:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(NSString *)key;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(id)value;
-(id)initWithStore:(id)arg1 key:(id)arg2 ;
-(void)registerDefaultValue:(id)arg1 ;
@end

