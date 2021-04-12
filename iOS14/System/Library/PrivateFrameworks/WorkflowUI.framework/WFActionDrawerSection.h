/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class NSString, NSArray;

@interface WFActionDrawerSection : NSObject {

	BOOL _loading;
	NSString* _localizedTitle;
	NSArray* _actions;
	NSArray* _donations;
	NSString* _bundleIdentifier;
	long long _sectionType;

}

@property (nonatomic,copy,readonly) NSString * localizedTitle;                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * donations;                               //@synthesize donations=_donations - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading;                 //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) long long sectionType;                         //@synthesize sectionType=_sectionType - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)localizedTitle;
-(NSArray *)actions;
-(BOOL)isLoading;
-(NSString *)bundleIdentifier;
-(long long)sectionType;
-(NSArray *)donations;
-(void)setDonations:(NSArray *)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 actions:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 ;
-(id)initWithLocalizedTitle:(id)arg1 donations:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 actions:(id)arg5 ;
-(id)initAsLoading;
@end

