/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface SKUIReportAConcernConfiguration : NSObject <NSCopying> {

	NSURL* _reportConcernURL;
	long long _itemIdentifier;
	NSString* _reportConcernExplanation;
	NSString* _selectReasonTitle;
	NSString* _selectReasonSubtitle;
	NSString* _privacyNote;
	NSArray* _reasons;

}

@property (nonatomic,copy) NSURL * reportConcernURL;                         //@synthesize reportConcernURL=_reportConcernURL - In the implementation block
@property (assign,nonatomic) long long itemIdentifier;                       //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * reportConcernExplanation;              //@synthesize reportConcernExplanation=_reportConcernExplanation - In the implementation block
@property (nonatomic,copy) NSString * selectReasonTitle;                     //@synthesize selectReasonTitle=_selectReasonTitle - In the implementation block
@property (nonatomic,copy) NSString * selectReasonSubtitle;                  //@synthesize selectReasonSubtitle=_selectReasonSubtitle - In the implementation block
@property (nonatomic,copy) NSString * privacyNote;                           //@synthesize privacyNote=_privacyNote - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                //@synthesize reasons=_reasons - In the implementation block
+(id)configurationWithTemplateElement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)itemIdentifier;
-(void)setItemIdentifier:(long long)arg1 ;
-(NSArray *)reasons;
-(void)setReasons:(NSArray *)arg1 ;
-(NSURL *)reportConcernURL;
-(void)setReportConcernURL:(NSURL *)arg1 ;
-(NSString *)selectReasonTitle;
-(void)setSelectReasonTitle:(NSString *)arg1 ;
-(NSString *)selectReasonSubtitle;
-(void)setSelectReasonSubtitle:(NSString *)arg1 ;
-(NSString *)reportConcernExplanation;
-(void)setReportConcernExplanation:(NSString *)arg1 ;
-(void)setPrivacyNote:(NSString *)arg1 ;
-(NSString *)privacyNote;
@end

