/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFCreateFolderEvent : WFEvent {

	unsigned _icon;
	unsigned _shortcutCount;
	NSString* _folderSource;
	NSString* _key;

}

@property (nonatomic,copy) NSString * folderSource;               //@synthesize folderSource=_folderSource - In the implementation block
@property (assign,nonatomic) unsigned icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned shortcutCount;              //@synthesize shortcutCount=_shortcutCount - In the implementation block
+(Class)codableEventClass;
-(unsigned)icon;
-(void)setIcon:(unsigned)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setShortcutCount:(unsigned)arg1 ;
-(unsigned)shortcutCount;
-(NSString *)folderSource;
-(void)setFolderSource:(NSString *)arg1 ;
@end

