/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class NSString, NSNumber, UIImage, NSArray;

@interface UIShortcutActivity : UIApplicationExtensionActivity {

	NSString* _identifier;
	NSNumber* _sortValue;
	UIImage* _iconImage;
	NSString* _singleUseToken;
	NSString* _name;
	NSArray* _photosAssetIdentifiers;

}

@property (nonatomic,retain) UIImage * iconImage;                           //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * singleUseToken;                     //@synthesize singleUseToken=_singleUseToken - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSNumber * sortValue;                          //@synthesize sortValue=_sortValue - In the implementation block
@property (nonatomic,retain) NSArray * photosAssetIdentifiers;              //@synthesize photosAssetIdentifiers=_photosAssetIdentifiers - In the implementation block
-(id)activityType;
-(UIImage *)iconImage;
-(id)initWithPartial:(id)arg1 ;
-(NSString *)name;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(id)_actionImage;
-(NSNumber *)sortValue;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)activityTitle;
-(void)setSortValue:(NSNumber *)arg1 ;
-(NSString *)singleUseToken;
-(void)setSingleUseToken:(NSString *)arg1 ;
-(void)setPhotosAssetIdentifiers:(NSArray *)arg1 ;
-(NSArray *)photosAssetIdentifiers;
-(id)initPartialShortcutWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3 sortValue:(id)arg4 ;
-(long long)_defaultSortGroup;
-(id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3 ;
@end

