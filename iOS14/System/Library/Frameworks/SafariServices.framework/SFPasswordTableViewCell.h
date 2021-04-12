/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/SFPasswordTableViewCell.h>
@class WBSSavedPassword;


@protocol SFPasswordTableViewCell <NSObject>
@property (nonatomic,readonly) WBSSavedPassword * savedPassword; 
@required
-(WBSSavedPassword *)savedPassword;
-(void)setIcon:(id)arg1;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2;

@end


@class WBSSavedPassword, UILabel, UIView, NSString;

@interface SFPasswordTableViewCell : UITableViewCell <SFPasswordTableViewCell> {

	UILabel* _monogramLabel;
	UIView* _monogramBackgroundView;
	WBSSavedPassword* _savedPassword;
	NSString* _searchPattern;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (nonatomic,readonly) NSString * searchPattern;                      //@synthesize searchPattern=_searchPattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WBSSavedPassword *)savedPassword;
-(void)setIcon:(id)arg1 ;
-(void)safari_copyUserName;
-(void)safari_copyPassword;
-(void)showPlaceholderImageForDomain:(id)arg1 backgroundColor:(id)arg2 ;
-(NSString *)searchPattern;
-(void)setSavedPassword:(id)arg1 searchPattern:(id)arg2 ;
-(void)setSavedPassword:(id)arg1 withWarnings:(id)arg2 savedPasswordIsOnlySavedPasswordForHighLevelDomain:(BOOL)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

