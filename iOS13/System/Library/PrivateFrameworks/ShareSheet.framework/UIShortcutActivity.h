/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIApplicationExtensionActivity.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage, NSArray;

@interface UIShortcutActivity : UIApplicationExtensionActivity <NSSecureCoding> {

	NSString* _identifier;
	UIImage* _iconImage;
	NSString* _singleUseToken;
	NSString* _name;
	NSArray* _photosAssetIdentifiers;

}

@property (nonatomic,retain) UIImage * iconImage;                           //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * singleUseToken;                     //@synthesize singleUseToken=_singleUseToken - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * photosAssetIdentifiers;              //@synthesize photosAssetIdentifiers=_photosAssetIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)activityType;
-(UIImage *)iconImage;
-(id)activityTitle;
-(long long)_defaultSortGroup;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(id)_actionImage;
-(id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3 ;
-(id)initWithPartial:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setSingleUseToken:(NSString *)arg1 ;
-(void)setPhotosAssetIdentifiers:(NSArray *)arg1 ;
-(NSString *)singleUseToken;
-(NSArray *)photosAssetIdentifiers;
-(id)initPartialShortcutFromXPCHelperWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3 ;
@end

