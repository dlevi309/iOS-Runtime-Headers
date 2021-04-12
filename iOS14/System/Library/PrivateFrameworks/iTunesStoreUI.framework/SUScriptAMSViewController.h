/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)DSID;
-(void)setURL:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setDSID:(NSString *)arg1 ;
-(SUScriptAccount *)primaryAccount;
-(NSString *)URL;
-(void)setPrimaryAccount:(SUScriptAccount *)arg1 ;
-(id)_className;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(id)initWithPrimaryAccount:(id)arg1 ;
@end

