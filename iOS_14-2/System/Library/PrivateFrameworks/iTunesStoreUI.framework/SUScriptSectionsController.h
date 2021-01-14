/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject

@property (readonly) id sections; 
@property (retain) SUScriptSection * selectedSection; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(id)sections;
-(id)attributeKeys;
-(SUScriptSection *)selectedSection;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)_tabBarConfigurationChangedNotification:(id)arg1 ;
-(id)_copySectionWithIdentifier:(id)arg1 ;
-(id)_fixedSelectedIdentifier;
-(void)_setSelectedIdentifier:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(void)setRootViewController:(id)arg1 forSection:(id)arg2 ;
-(void)setSelectedSection:(SUScriptSection *)arg1 ;
@end

