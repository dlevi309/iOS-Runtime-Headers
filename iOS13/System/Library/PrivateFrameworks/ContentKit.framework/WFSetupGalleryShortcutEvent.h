/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupGalleryShortcutEvent : WFEvent {

	BOOL _completed;
	NSString* _key;
	NSString* _galleryCategoryIdentifier;
	NSString* _galleryIdentifier;
	NSString* _addToSiriBundleIdentifier;

}

@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * galleryCategoryIdentifier;              //@synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(NSString *)galleryCategoryIdentifier;
-(void)setGalleryCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
@end

