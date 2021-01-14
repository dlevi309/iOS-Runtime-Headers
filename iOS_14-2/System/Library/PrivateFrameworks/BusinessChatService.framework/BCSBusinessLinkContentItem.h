/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSBusinessLinkContentItemDescribing.h>

@class BCSBusinessLinkContentItemModel, NSString;

@interface BCSBusinessLinkContentItem : NSObject <BCSBusinessLinkContentItemDescribing> {

	BCSBusinessLinkContentItemModel* _businessLinkContentItemModel;

}

@property (nonatomic,readonly) BCSBusinessLinkContentItemModel * businessLinkContentItemModel;              //@synthesize businessLinkContentItemModel=_businessLinkContentItemModel - In the implementation block
@property (getter=isDefault,nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,copy,readonly) NSString * language; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)subtitle;
-(NSString *)description;
-(BOOL)isDefault;
-(NSString *)language;
-(NSString *)title;
-(id)initWithBusinessLinkContentItemModel:(id)arg1 ;
-(BCSBusinessLinkContentItemModel *)businessLinkContentItemModel;
@end

