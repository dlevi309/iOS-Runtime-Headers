/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionInfo, BBSectionIcon, NSArray, BBSectionParameters, NSDictionary;

@interface BBDataProviderIdentity : NSObject <NSSecureCoding> {

	SCD_Struct_BB1 _traits;
	NSString* _sectionIdentifier;
	NSString* _universalSectionIdentifier;
	BBSectionInfo* _defaultSectionInfo;
	NSString* _sectionDisplayName;
	BBSectionIcon* _sectionIcon;
	NSArray* _sortDescriptors;
	BBSectionParameters* _sectionParameters;
	NSArray* _defaultSubsectionInfos;
	NSDictionary* _subsectionDisplayNames;
	NSString* _sortKey;
	NSString* _parentSectionIdentifier;
	BOOL _syncsBulletinDismissal;
	NSDictionary* _filterDisplayNames;

}

@property (nonatomic,readonly) SCD_Struct_BB1 traits;                              //@synthesize traits=_traits - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                           //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;                  //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (nonatomic,copy) BBSectionInfo * defaultSectionInfo;                     //@synthesize defaultSectionInfo=_defaultSectionInfo - In the implementation block
@property (nonatomic,copy) NSString * sectionDisplayName;                          //@synthesize sectionDisplayName=_sectionDisplayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * sectionIcon;                            //@synthesize sectionIcon=_sectionIcon - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) BBSectionParameters * sectionParameters;              //@synthesize sectionParameters=_sectionParameters - In the implementation block
@property (nonatomic,copy) NSArray * defaultSubsectionInfos;                       //@synthesize defaultSubsectionInfos=_defaultSubsectionInfos - In the implementation block
@property (nonatomic,copy) NSString * sortKey;                                     //@synthesize sortKey=_sortKey - In the implementation block
@property (nonatomic,copy) NSDictionary * subsectionDisplayNames;                  //@synthesize subsectionDisplayNames=_subsectionDisplayNames - In the implementation block
@property (nonatomic,readonly) BOOL syncsBulletinDismissal;                        //@synthesize syncsBulletinDismissal=_syncsBulletinDismissal - In the implementation block
@property (nonatomic,copy) NSString * parentSectionIdentifier;                     //@synthesize parentSectionIdentifier=_parentSectionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * filterDisplayNames;                      //@synthesize filterDisplayNames=_filterDisplayNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityForRemoteDataProvider:(id)arg1 ;
+(id)identityForDataProvider:(id)arg1 ;
-(void)setSortKey:(NSString *)arg1 ;
-(SCD_Struct_BB1)traits;
-(void)setParentSectionIdentifier:(NSString *)arg1 ;
-(NSString *)sectionIdentifier;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(NSString *)universalSectionIdentifier;
-(void)setDefaultSectionInfo:(BBSectionInfo *)arg1 ;
-(NSString *)sortKey;
-(void)setSectionIcon:(BBSectionIcon *)arg1 ;
-(void)setFilterDisplayNames:(NSDictionary *)arg1 ;
-(NSString *)parentSectionIdentifier;
-(BBSectionInfo *)defaultSectionInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)initForDataProvider:(id)arg1 forRemoteDataProvider:(BOOL)arg2 ;
-(NSArray *)sortDescriptors;
-(NSArray *)defaultSubsectionInfos;
-(id)description;
-(NSDictionary *)filterDisplayNames;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(BBSectionParameters *)sectionParameters;
-(void)setSubsectionDisplayNames:(NSDictionary *)arg1 ;
-(void)setSectionDisplayName:(NSString *)arg1 ;
-(BBSectionIcon *)sectionIcon;
-(id)initWithCoder:(id)arg1 ;
-(void)setSectionParameters:(BBSectionParameters *)arg1 ;
-(NSDictionary *)subsectionDisplayNames;
-(NSString *)sectionDisplayName;
-(void)setDefaultSubsectionInfos:(NSArray *)arg1 ;
@end

