/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@interface CLAPISerializer : NSObject
+(id)webItemTypeStringForType:(long long)arg1 ;
+(id)accountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(BOOL)arg3 ;
+(id)itemWithName:(id)arg1 ;
+(id)itemWithPrivate:(BOOL)arg1 ;
+(id)itemForRestore;
+(id)bookmarkWithURL:(id)arg1 name:(id)arg2 ;
+(id)bookmarkWithURL:(id)arg1 name:(id)arg2 private:(BOOL)arg3 ;
+(id)receiptWithBase64String:(id)arg1 ;
+(id)JSONDataFromDictionary:(id)arg1 ;
+(id)JSONDataFromArray:(id)arg1 ;
@end

