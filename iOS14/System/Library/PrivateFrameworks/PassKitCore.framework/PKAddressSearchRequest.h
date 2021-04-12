/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)keysToFetch;
-(id)initWithPhoneNumber:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSString *)fragment;
-(void)setType:(long long)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(id)contactKeys;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(/*^block*/id)_contactPropertyFilterForKey:(id)arg1 propertyName:(id)arg2 ;
-(id)postalAddressKeys;
-(id)initWithFullText:(id)arg1 ;
-(id)initWithNameComponents:(id)arg1 ;
-(id)contactFilter;
-(void)setContactFilter:(id)arg1 ;
-(void)setOutputKey:(NSString *)arg1 ;
-(long long)type;
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(id)allKeys;
-(NSString *)outputKey;
@end

