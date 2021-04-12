/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionLayoutSupplementaryEnrolling.h>

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSSet, NSString;

@interface _UICollectionLayoutSupplementaryRegistrar : NSObject <_UICollectionLayoutSupplementaryEnrolling> {

	NSMutableOrderedSet* _enrollmentIdentifiers;
	NSMutableSet* _uncommittedEnrollmentIdentifiers;
	NSMutableDictionary* _enrollmentsDict;
	NSMutableDictionary* _kindEnrollmentsDict;

}

@property (nonatomic,retain) NSMutableOrderedSet * enrollmentIdentifiers;                  //@synthesize enrollmentIdentifiers=_enrollmentIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * uncommittedEnrollmentIdentifiers;              //@synthesize uncommittedEnrollmentIdentifiers=_uncommittedEnrollmentIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * enrollmentsDict;                        //@synthesize enrollmentsDict=_enrollmentsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kindEnrollmentsDict;                    //@synthesize kindEnrollmentsDict=_kindEnrollmentsDict - In the implementation block
@property (nonatomic,readonly) NSSet * kinds; 
@property (nonatomic,readonly) long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)kinds;
-(void)commitEnrollment:(id)arg1 ;
-(id)init;
-(void)setKindEnrollmentsDict:(NSMutableDictionary *)arg1 ;
-(void)setUncommittedEnrollmentIdentifiers:(NSMutableSet *)arg1 ;
-(long long)countForKind:(id)arg1 ;
-(long long)count;
-(void)pruneUncommitedEnrollments;
-(NSString *)description;
-(NSMutableDictionary *)kindEnrollmentsDict;
-(void)_addEnrollmentToKindDict:(id)arg1 ;
-(NSMutableDictionary *)enrollmentsDict;
-(void)unenrollAllAfterAndIncludingEnrollment:(id)arg1 ;
-(id)enrollSupplementaryForKind:(id)arg1 ;
-(void)setEnrollmentsDict:(NSMutableDictionary *)arg1 ;
-(void)unenrollAllAfterEnrollment:(id)arg1 ;
-(void)_removeEnrollmentWithIdentifier:(id)arg1 ;
-(long long)kindIndexForEnrollmentIdentifier:(id)arg1 ;
-(NSMutableOrderedSet *)enrollmentIdentifiers;
-(void)setEnrollmentIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(NSMutableSet *)uncommittedEnrollmentIdentifiers;
@end

