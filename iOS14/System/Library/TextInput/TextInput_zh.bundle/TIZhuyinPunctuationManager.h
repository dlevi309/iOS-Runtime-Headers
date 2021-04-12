/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/


@class NSDictionary;

@interface TIZhuyinPunctuationManager : NSObject

@property (readonly) NSDictionary * punctuationMap; 
+(id)shareZhuyinPunctuationManager;
-(NSDictionary *)punctuationMap;
-(id)candidatesFor:(id)arg1 ;
@end

