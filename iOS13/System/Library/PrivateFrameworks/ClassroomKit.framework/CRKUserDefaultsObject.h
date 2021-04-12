/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(NSObject*<CRKKeyObjectStoring>)store;
-(id)initWithDefaults:(id)arg1 key:(id)arg2 ;
-(id)initWithStore:(id)arg1 key:(id)arg2 ;
-(void)registerDefaultValue:(id)arg1 ;
@end

