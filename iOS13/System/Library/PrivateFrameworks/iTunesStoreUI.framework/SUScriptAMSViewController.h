/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString, SUScriptAccount;

@interface SUScriptAMSViewController : SUScriptViewController {

	NSString* _DSID;
	NSString* _URL;
	SUScriptAccount* _primaryAccount;

}

@property (nonatomic,retain) SUScriptAccount * primaryAccount;              //@synthesize primaryAccount=_primaryAccount - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                 //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * URL;                                  //@synthesize URL=_URL - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(NSString *)URL;
-(id)_className;
-(id)attributeKeys;
-(void)setDSID:(NSString *)arg1 ;
-(SUScriptAccount *)primaryAccount;
-(void)setPrimaryAccount:(SUScriptAccount *)arg1 ;
-(NSString *)DSID;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)initWithPrimaryAccount:(id)arg1 ;
@end

