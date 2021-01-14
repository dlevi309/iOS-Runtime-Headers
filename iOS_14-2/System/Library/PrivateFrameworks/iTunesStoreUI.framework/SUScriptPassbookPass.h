/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)serialNumber;
-(NSString *)passURL;
-(id)attributeKeys;
-(NSString *)passTypeIdentifier;
-(id)_className;
-(id)initWithPass:(id)arg1 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
@end

