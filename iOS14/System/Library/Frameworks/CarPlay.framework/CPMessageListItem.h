/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPListItemPrivate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CPListTemplateItem.h>

@class NSString, CPMessageListItemLeadingConfiguration, CPMessageListItemTrailingConfiguration, NSUUID, CPListTemplate;

@interface CPMessageListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPListTemplateItem> {

	NSString* _text;
	NSString* _conversationIdentifier;
	NSString* _phoneOrEmailAddress;
	CPMessageListItemLeadingConfiguration* _leadingConfiguration;
	CPMessageListItemTrailingConfiguration* _trailingConfiguration;
	NSString* _detailText;
	NSString* _trailingText;
	id _userInfo;
	NSUUID* _identifier;
	CPListTemplate* _listTemplate;

}

@property (nonatomic,readonly) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) CPListTemplate * listTemplate;                                        //@synthesize listTemplate=_listTemplate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                               //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentifier;                                             //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneOrEmailAddress;                                                //@synthesize phoneOrEmailAddress=_phoneOrEmailAddress - In the implementation block
@property (nonatomic,retain) CPMessageListItemLeadingConfiguration * leadingConfiguration;                //@synthesize leadingConfiguration=_leadingConfiguration - In the implementation block
@property (nonatomic,retain) CPMessageListItemTrailingConfiguration * trailingConfiguration;              //@synthesize trailingConfiguration=_trailingConfiguration - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                                         //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSString * trailingText;                                                       //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)_conversation;
-(id)_dateStringFromDate:(id)arg1 dateFormatter:(id)arg2 timeFormatter:(id)arg3 ;
-(id)initWithConversation:(id)arg1 dateFormatter:(id)arg2 timeFormatter:(id)arg3 ;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)setTrailingText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
-(NSString *)trailingText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)initWithConversationIdentifier:(id)arg1 text:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)_setNeedsUpdate;
-(NSString *)detailText;
-(BOOL)isEqual:(id)arg1 ;
-(CPListTemplate *)listTemplate;
-(void)setListTemplate:(CPListTemplate *)arg1 ;
-(NSString *)phoneOrEmailAddress;
-(CPMessageListItemLeadingConfiguration *)leadingConfiguration;
-(CPMessageListItemTrailingConfiguration *)trailingConfiguration;
-(id)initWithFullName:(id)arg1 phoneOrEmailAddress:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6 ;
-(void)setLeadingConfiguration:(CPMessageListItemLeadingConfiguration *)arg1 ;
-(void)setTrailingConfiguration:(CPMessageListItemTrailingConfiguration *)arg1 ;
-(void)setPhoneOrEmailAddress:(NSString *)arg1 ;
@end

