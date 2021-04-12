/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(long long)count;
-(long long)kindIndexForEnrollmentIdentifier:(id)arg1 ;
-(void)commitEnrollment:(id)arg1 ;
-(void)pruneUncommitedEnrollments;
-(long long)countForKind:(id)arg1 ;
-(NSMutableDictionary *)enrollmentsDict;
-(void)_addEnrollmentToKindDict:(id)arg1 ;
-(NSMutableOrderedSet *)enrollmentIdentifiers;
-(NSMutableSet *)uncommittedEnrollmentIdentifiers;
-(NSMutableDictionary *)kindEnrollmentsDict;
-(void)_removeEnrollmentWithIdentifier:(id)arg1 ;
-(id)enrollSupplementaryForKind:(id)arg1 ;
-(NSSet *)kinds;
-(void)unenrollAllAfterAndIncludingEnrollment:(id)arg1 ;
-(void)unenrollAllAfterEnrollment:(id)arg1 ;
-(void)setEnrollmentIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(void)setUncommittedEnrollmentIdentifiers:(NSMutableSet *)arg1 ;
-(void)setEnrollmentsDict:(NSMutableDictionary *)arg1 ;
-(void)setKindEnrollmentsDict:(NSMutableDictionary *)arg1 ;
@end

