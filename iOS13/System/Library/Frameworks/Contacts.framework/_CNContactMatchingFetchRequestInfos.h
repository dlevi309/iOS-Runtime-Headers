/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
@end

