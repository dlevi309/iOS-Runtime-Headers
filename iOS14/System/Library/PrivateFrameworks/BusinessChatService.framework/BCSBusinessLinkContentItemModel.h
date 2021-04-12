/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BCSBusinessLinkContentItemDescribing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSBusinessLinkContentItemModel : NSObject <BSDescriptionProviding, BCSBusinessLinkContentItemDescribing, NSCopying, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _language;
	BOOL _isDefault;

}

@property (getter=isDefault,nonatomic,readonly) BOOL isDefault; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isDefault;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)title;
-(id)initWithBusinessLinkContent:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 isDefault:(BOOL)arg4 ;
@end

