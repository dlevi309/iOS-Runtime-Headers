/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUScriptAction : SUScriptObject <NSCopying> {

	NSString* _actionType;

}

@property (copy) NSString * actionType; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_className;
-(void)performAction;
-(id)attributeKeys;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(id)initWithActionType:(id)arg1 ;
-(id)scriptAttributeKeys;
@end

