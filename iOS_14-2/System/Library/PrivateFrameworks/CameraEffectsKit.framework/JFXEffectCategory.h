/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSArray;

@interface JFXEffectCategory : NSObject {

	NSString* _categoryID;
	NSString* _displayName;
	NSArray* _effectIDs;

}

@property (nonatomic,retain) NSString * categoryID;               //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * effectIDs;                 //@synthesize effectIDs=_effectIDs - In the implementation block
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)categoryID;
-(NSString *)displayName;
-(NSArray *)effectIDs;
-(id)initWithCategoryID:(id)arg1 displayName:(id)arg2 effectIDs:(id)arg3 ;
-(void)setEffectIDs:(NSArray *)arg1 ;
@end

