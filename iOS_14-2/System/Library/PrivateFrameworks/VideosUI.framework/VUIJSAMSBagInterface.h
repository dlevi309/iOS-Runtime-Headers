/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/VUIJSAMSBagDelegate.h>

@class NSDictionary;

@interface VUIJSAMSBagInterface : IKJSObject <VUIJSAMSBagDelegate>

@property (nonatomic,readonly) NSDictionary * VUIAMSBagValueTypes; 
+(id)generateResponseDictionary:(id)arg1 withError:(id)arg2 ;
+(id)convertNSErrorIntoDict:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)registerBagKey:(id)arg1 withValueType:(unsigned long long)arg2 ;
-(void)arrayForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)boolForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)doubleForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)integerForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)stringForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)URLForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(void)dictionaryForKeyWithCompletion:(id)arg1 :(id)arg2 ;
-(NSDictionary *)VUIAMSBagValueTypes;
@end

