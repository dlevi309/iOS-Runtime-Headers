/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSPredicate, NSArray;

@interface _CNContactMatchingFetchRequestInfos : NSObject {

	NSPredicate* _predicate;
	NSArray* _properties;

}

@property (nonatomic,retain) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * properties;                 //@synthesize properties=_properties - In the implementation block
+(id)fetchRequestInfoForPredicate:(id)arg1 properties:(id)arg2 ;
-(NSArray *)properties;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)setProperties:(NSArray *)arg1 ;
@end

