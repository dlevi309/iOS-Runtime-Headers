/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding> {

	NSString* _applicationIdentifier;
	NSString* _teamIdentifier;
	NSString* _localizedName;
	NSArray* _activityTypes;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                     //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSArray * activityTypes;                       //@synthesize activityTypes=_activityTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)applicationIdentifier;
-(NSArray *)activityTypes;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 teamIdentifier:(id)arg2 localizedName:(id)arg3 activityTypes:(id)arg4 ;
-(id)initWithLSApplicationProxy:(id)arg1 ;
-(void)setActivityTypes:(NSArray *)arg1 ;
@end

