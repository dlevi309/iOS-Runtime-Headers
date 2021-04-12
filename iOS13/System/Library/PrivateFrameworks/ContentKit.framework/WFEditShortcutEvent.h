/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFEditShortcutEvent : WFEvent {

	int _source;
	unsigned _actionCount;
	NSString* _key;
	NSString* _addToSiriBundleIdentifier;
	NSString* _galleryIdentifier;

}

@property (nonatomic,copy) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int source;                                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                            //@synthesize actionCount=_actionCount - In the implementation block
@property (nonatomic,copy) NSString * addToSiriBundleIdentifier;              //@synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                      //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(void)setKey:(NSString *)arg1 ;
-(void)setActionCount:(unsigned)arg1 ;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)galleryIdentifier;
-(unsigned)actionCount;
-(NSString *)addToSiriBundleIdentifier;
-(void)setAddToSiriBundleIdentifier:(NSString *)arg1 ;
@end

