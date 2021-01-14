/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSString* _fullName;
	long long _personType;
	long long _manualSortOrder;
	NSString* _displayName;
	long long _verifiedType;
	NSString* _mergeTargetPersonIdentifier;
	NSData* _contactDescriptor;

}

@property (nonatomic,copy) NSData * contactDescriptor;                            //@synthesize contactDescriptor=_contactDescriptor - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long personType;                                //@synthesize personType=_personType - In the implementation block
@property (assign,nonatomic) long long manualSortOrder;                           //@synthesize manualSortOrder=_manualSortOrder - In the implementation block
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long verifiedType;                              //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,copy) NSString * mergeTargetPersonIdentifier;                //@synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier - In the implementation block
+(BOOL)serverSupportsGraphPeopleHome;
+(BOOL)serverSupportsMergeTargetRef;
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(void)setPersonType:(long long)arg1 ;
-(void)setManualSortOrder:(long long)arg1 ;
-(void)setMergeTargetPersonIdentifier:(NSString *)arg1 ;
-(BOOL)supportsDeletion;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)verifiedType;
-(void)setVerifiedType:(long long)arg1 ;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(long long)personType;
-(NSDictionary *)contactMatchingDictionary;
-(NSString *)mergeTargetPersonIdentifier;
-(long long)manualSortOrder;
-(NSString *)displayName;
-(BOOL)supportsDirectDeletion;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSData *)contactDescriptor;
-(void)setContactDescriptor:(NSData *)arg1 ;
-(BOOL)validateRecordForTracker:(id)arg1 ;
@end

