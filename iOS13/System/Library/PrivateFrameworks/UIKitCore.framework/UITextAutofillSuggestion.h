/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)password;
-(NSString *)username;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(id)_keyboardCandidate;
@end

