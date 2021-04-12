/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

@class NSDictionary;


@protocol VUIJSAMSBagDelegate <JSExport>
@property (nonatomic,readonly) NSDictionary * VUIAMSBagValueTypes; 
@required
-(id)boolForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(void)registerBagKey:(id)arg1 withValueType:(unsigned long long)arg2;
-(void)arrayForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)boolForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)doubleForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)integerForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)stringForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)URLForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)dictionaryForKeyWithCompletion:(id)arg1 :(id)arg2;
-(NSDictionary *)VUIAMSBagValueTypes;

@end

