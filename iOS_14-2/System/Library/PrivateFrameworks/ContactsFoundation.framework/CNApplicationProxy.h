/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSString* _teamIdentifier;
	NSString* _localizedName;
	NSArray* _activityTypes;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * activityTypes;                  //@synthesize activityTypes=_activityTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSArray *)activityTypes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setActivityTypes:(NSArray *)arg1 ;
-(id)initWithLSApplicationProxy:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
@end

