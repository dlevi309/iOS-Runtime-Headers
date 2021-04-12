/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessGranted;
-(id)attributeKeys;
-(NSString *)accountTypeDescription;
-(NSString *)identifier;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(ACAccountType *)nativeAccountType;
-(id)initWithACAccountType:(id)arg1 ;
@end

