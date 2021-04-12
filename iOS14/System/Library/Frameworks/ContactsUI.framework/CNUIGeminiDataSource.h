/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNGeminiManagerDelegate.h>

@protocol CNUIGeminiDataSourceDelegate;
@class CNContact, CNGeminiResult, CNGeminiManager, NSString;

@interface CNUIGeminiDataSource : NSObject <CNGeminiManagerDelegate> {

	CNContact* _contact;
	CNGeminiResult* _geminiResult;
	id<CNUIGeminiDataSourceDelegate> _delegate;
	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;                               //@synthesize geminiManager=_geminiManager - In the implementation block
@property (nonatomic,retain) CNGeminiResult * geminiResult;                                 //@synthesize geminiResult=_geminiResult - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSString * channelIdentifier; 
@property (assign,nonatomic,__weak) id<CNUIGeminiDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id<CNUIGeminiDataSourceDelegate>)delegate;
-(NSString *)channelIdentifier;
-(CNGeminiManager *)geminiManager;
-(void)setDelegate:(id<CNUIGeminiDataSourceDelegate>)arg1 ;
-(void)setGeminiResult:(CNGeminiResult *)arg1 ;
-(void)channelsDidChangeForGeminiManager:(id)arg1 ;
-(id)initWithGeminiManager:(id)arg1 ;
-(void)resetDataSource;
-(CNGeminiResult *)geminiResult;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
@end

