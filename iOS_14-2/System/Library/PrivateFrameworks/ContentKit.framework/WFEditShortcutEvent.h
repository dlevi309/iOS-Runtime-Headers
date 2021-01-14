/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFEditShortcutEvent : WFEvent {

	unsigned _actionCount;
	NSString* _key;
	NSString* _shortcutSource;
	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryIdentifier;

}

@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * shortcutSource;                         //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                            //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(void)setShortcutSource:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(NSString *)galleryIdentifier;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutSource;
@end

