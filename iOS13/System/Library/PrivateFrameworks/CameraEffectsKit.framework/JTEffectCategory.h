/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@class NSString, NSArray;

@interface JTEffectCategory : NSObject {

	NSString* _categoryID;
	NSString* _displayName;
	NSArray* _effectIDs;

}

@property (nonatomic,retain) NSString * categoryID;               //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * effectIDs;                 //@synthesize effectIDs=_effectIDs - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)categoryID;
-(void)setCategoryID:(NSString *)arg1 ;
-(NSArray *)effectIDs;
-(void)setEffectIDs:(NSArray *)arg1 ;
@end

