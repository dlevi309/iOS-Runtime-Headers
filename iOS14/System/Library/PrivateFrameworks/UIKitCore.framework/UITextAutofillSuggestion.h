/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextSuggestion.h>

@class NSString;

@interface UITextAutofillSuggestion : UITextSuggestion {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
+(id)autofillSuggestionWithUsername:(id)arg1 password:(id)arg2 ;
-(id)_keyboardCandidate;
-(NSString *)password;
-(NSString *)username;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

