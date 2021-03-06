/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMRosterProviding.h>

@protocol CRKASMRosterProviding;
@class NSObject, NSArray, NSString;

@interface CRKASMRosterProviderDecoratorBase : NSObject <CRKASMRosterProviding> {

	NSObject*<CRKASMRosterProviding> _underlyingRosterProvider;

}

@property (nonatomic,readonly) NSObject*<CRKASMRosterProviding> underlyingRosterProvider;              //@synthesize underlyingRosterProvider=_underlyingRosterProvider - In the implementation block
@property (nonatomic,readonly) id<CRKASMRoster> roster; 
@property (getter=isPopulated,nonatomic,readonly) BOOL populated; 
@property (nonatomic,readonly) id<CRKASMUserFetching> userFetcher; 
@property (nonatomic,copy,readonly) NSArray * locationsWithManagePermissions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingRoster;
+(id)keyPathsForValuesAffectingPopulated;
+(id)keyPathsForValuesAffectingLocationsWithManagePermissions;
-(void)refresh;
-(id<CRKASMRoster>)roster;
-(BOOL)isPopulated;
-(id)initWithRosterProvider:(id)arg1 ;
-(NSObject*<CRKASMRosterProviding>)underlyingRosterProvider;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)ingestCertificates:(id)arg1 forTrustedUserIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)locationsWithManagePermissions;
-(id)studentDirectoryForLocationIDs:(id)arg1 ;
-(id)instructorDirectoryForLocationIDs:(id)arg1 ;
-(id<CRKASMUserFetching>)userFetcher;
@end

