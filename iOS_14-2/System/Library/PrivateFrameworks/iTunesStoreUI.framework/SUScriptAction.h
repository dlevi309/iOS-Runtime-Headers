/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(void)performAction;
-(id)attributeKeys;
-(id)initWithActionType:(id)arg1 ;
-(id)_className;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
@end

