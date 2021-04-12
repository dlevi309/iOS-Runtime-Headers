/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <libobjc.A.dylib/AAUISpecifierProvider.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AIDAAccountManager, NSString;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AIDAAccountManager* _accountManager;

}

@property (nonatomic,retain) AIDAAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AAUISpecifierProviderDelegate>)delegate;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(id)initWithAccountManager:(id)arg1 ;
-(NSArray *)specifiers;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(AIDAAccountManager *)accountManager;
-(void)setAccountManager:(AIDAAccountManager *)arg1 ;
-(BOOL)shouldShowLocationSharingSpecifier;
-(void)locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)shouldEnableLocationSharingSpecifier;
-(BOOL)isAccountInGrayMode;
-(BOOL)locationServicesDisabledByRestrictions;
@end

