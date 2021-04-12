/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject {

	ACAccountType* _accountType;

}

@property (nonatomic,readonly) ACAccountType * nativeAccountType;              //@synthesize accountType=_accountType - In the implementation block
@property (readonly) id accessGranted; 
@property (readonly) NSString * accountTypeDescription; 
@property (readonly) NSString * identifier; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)_className;
-(NSString *)accountTypeDescription;
-(id)accessGranted;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(ACAccountType *)nativeAccountType;
-(id)initWithACAccountType:(id)arg1 ;
@end

