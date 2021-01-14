/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ATXAppDirectoryCategory : NSObject <NSSecureCoding> {

	unsigned long long _categoryID;
	NSArray* _appBundleIDs;
	NSString* _localizedName;

}

@property (nonatomic,readonly) unsigned long long categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,readonly) NSArray * appBundleIDs;                     //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)categoryIdentifierForScreenTimeCategoryID:(unsigned long long)arg1 ;
+(id)localizedStringForNonScreenTimeCategoryID:(unsigned long long)arg1 ;
+(unsigned long long)screenTimeCategoryIDForCategoryIdentifier:(id)arg1 ;
+(BOOL)isCategorySpecial:(unsigned long long)arg1 ;
+(BOOL)_instanceSpecificLocalizedStringExistsForCategory:(unsigned long long)arg1 ;
+(BOOL)isCategoryiTunesGenre:(unsigned long long)arg1 ;
+(BOOL)isCategoryScreenTime:(unsigned long long)arg1 ;
+(id)localizedStringForCategoryID:(unsigned long long)arg1 ;
-(NSString *)localizedName;
-(void)updateAppBundleIDs:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)updateCategoryLocalizedNameWithName:(id)arg1 ;
-(unsigned long long)categoryID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2 localizedName:(id)arg3 ;
-(NSArray *)appBundleIDs;
-(id)initWithCategoryID:(unsigned long long)arg1 appBundleIDs:(id)arg2 ;
-(id)localizedStringForCategoryID:(unsigned long long)arg1 ;
@end

