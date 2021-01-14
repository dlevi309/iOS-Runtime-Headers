/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding> {

	NSString* _chatGuid;
	NSArray* _chatHandles;
	NSString* _displayName;
	NSString* _handle;
	NSString* _contactIdentifier;
	unsigned long long _resultSourceType;
	NSArray* _recipients;

}

@property (nonatomic,copy) NSArray * recipients;                               //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * chatGuid;                       //@synthesize chatGuid=_chatGuid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * chatHandles;                     //@synthesize chatHandles=_chatHandles - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resultSourceType;              //@synthesize resultSourceType=_resultSourceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recipients;
-(NSString *)contactIdentifier;
-(NSString *)handle;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 recipients:(id)arg8 ;
-(NSArray *)chatHandles;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(unsigned long long)arg5 autocompleteResult:(id)arg6 ;
-(id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 ;
-(unsigned long long)resultSourceType;
-(void)setResultSourceType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)chatGuid;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

