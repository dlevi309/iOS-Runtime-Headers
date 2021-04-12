/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray, NSString, NSPredicate;

@interface PKAddressSearchRequest : NSObject {

	NSArray* _keysToFetch;
	/*^block*/id _contactFilter;
	NSString* _outputKey;
	long long _type;
	NSString* _fragment;
	NSPredicate* _predicate;

}

@property (assign,nonatomic) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * fragment;                    //@synthesize fragment=_fragment - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (nonatomic,copy) id contactFilter;                       //@synthesize contactFilter=_contactFilter - In the implementation block
@property (nonatomic,retain) NSString * outputKey;                 //@synthesize outputKey=_outputKey - In the implementation block
-(id)allKeys;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)fragment;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setFragment:(NSString *)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(id)contactKeys;
-(/*^block*/id)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2 ;
-(id)postalAddressKeys;
-(id)initWithFullText:(id)arg1 ;
-(id)initWithNameComponents:(id)arg1 ;
-(id)contactFilter;
-(void)setContactFilter:(id)arg1 ;
-(NSString *)outputKey;
-(void)setOutputKey:(NSString *)arg1 ;
@end

