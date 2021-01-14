/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXNavigationListItem.h>
@class NSString, PHCollection;


@protocol PXNavigationListItem <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * accessoryTitle; 
@property (nonatomic,readonly) NSString * glyphImageName; 
@property (getter=isDraggable,nonatomic,readonly) BOOL draggable; 
@property (getter=isReorderable,nonatomic,readonly) BOOL reorderable; 
@property (getter=isRemovable,nonatomic,readonly) BOOL removable; 
@property (getter=isRenamable,nonatomic,readonly) BOOL renamable; 
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (getter=isGroup,nonatomic,readonly) BOOL group; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (nonatomic,readonly) long long indentationLevel; 
@property (nonatomic,readonly) PHCollection * collection; 
@property (nonatomic,readonly) id representedObject; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,copy) NSString * badgeString; 
@property (nonatomic,readonly) NSString * visualDescription; 
@optional
-(id)cpAnalyticsEventName;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg1 existingAssetsFetchResult:(id)arg2;

@required
-(NSString *)visualDescription;
-(BOOL)isExpanded;
-(PHCollection *)collection;
-(BOOL)isGroup;
-(BOOL)isRemovable;
-(BOOL)isDraggable;
-(BOOL)isRenamable;
-(NSString *)badgeString;
-(long long)indentationLevel;
-(NSString *)identifier;
-(NSString *)accessoryTitle;
-(BOOL)isExpandable;
-(BOOL)isReorderable;
-(BOOL)isDeletable;
-(NSString *)glyphImageName;
-(long long)style;
-(NSString *)title;
-(void)setBadgeString:(id)arg1;
-(id)representedObject;

@end


@class NSString, PHCollection;

@interface PXNavigationListItem : NSObject <PXNavigationListItem> {

	NSString* _identifier;
	NSString* _title;
	NSString* _accessoryTitle;
	NSString* _badgeString;
	long long _itemCount;

}

@property (nonatomic,readonly) long long itemCount;                                //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * accessoryTitle;                          //@synthesize accessoryTitle=_accessoryTitle - In the implementation block
@property (nonatomic,readonly) NSString * glyphImageName; 
@property (getter=isDraggable,nonatomic,readonly) BOOL draggable; 
@property (getter=isReorderable,nonatomic,readonly) BOOL reorderable; 
@property (getter=isRemovable,nonatomic,readonly) BOOL removable; 
@property (getter=isRenamable,nonatomic,readonly) BOOL renamable; 
@property (getter=isDeletable,nonatomic,readonly) BOOL deletable; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (getter=isGroup,nonatomic,readonly) BOOL group; 
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded; 
@property (nonatomic,readonly) long long indentationLevel; 
@property (nonatomic,readonly) PHCollection * collection; 
@property (nonatomic,readonly) id representedObject; 
@property (nonatomic,readonly) long long style; 
@property (nonatomic,copy) NSString * badgeString;                                 //@synthesize badgeString=_badgeString - In the implementation block
@property (nonatomic,readonly) NSString * visualDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)visualDescription;
-(BOOL)isExpanded;
-(PHCollection *)collection;
-(BOOL)isGroup;
-(BOOL)isRemovable;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3 ;
-(BOOL)isDraggable;
-(long long)itemCount;
-(BOOL)isRenamable;
-(NSString *)description;
-(NSString *)badgeString;
-(unsigned long long)hash;
-(long long)indentationLevel;
-(NSString *)identifier;
-(NSString *)accessoryTitle;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 ;
-(BOOL)isEqualToNavigationListItem:(id)arg1 ;
-(BOOL)isExpandable;
-(BOOL)isReorderable;
-(BOOL)isDeletable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)glyphImageName;
-(long long)style;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBadgeString:(NSString *)arg1 ;
-(id)representedObject;
@end

