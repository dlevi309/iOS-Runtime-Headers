/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

@class NSArray;


@protocol AAUISpecifierProvider <NSObject>
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate; 
@property (nonatomic,copy) NSArray * specifiers; 
@optional
-(BOOL)handleURL:(id)arg1;

@required
-(NSArray *)specifiers;
-(id<AAUISpecifierProviderDelegate>)delegate;
-(id)initWithAccountManager:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setSpecifiers:(id)arg1;

@end

