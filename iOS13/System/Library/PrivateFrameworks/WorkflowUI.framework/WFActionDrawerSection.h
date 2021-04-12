/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleIdentifier;
-(NSString *)localizedTitle;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(BOOL)isLoading;
-(long long)sectionType;
-(NSArray *)donations;
-(void)setDonations:(NSArray *)arg1 ;
-(id)initWithLocalizedTitle:(id)arg1 actions:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 ;
-(id)initWithLocalizedTitle:(id)arg1 donations:(id)arg2 bundleIdentifier:(id)arg3 sectionType:(long long)arg4 actions:(id)arg5 ;
-(id)initAsLoading;
@end

