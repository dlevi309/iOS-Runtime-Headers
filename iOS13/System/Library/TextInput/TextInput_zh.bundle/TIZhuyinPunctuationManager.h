/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/


@class NSDictionary;

@interface TIZhuyinPunctuationManager : NSObject

@property (readonly) NSDictionary * punctuationMap; 
+(id)shareZhuyinPunctuationManager;
-(NSDictionary *)punctuationMap;
-(id)candidatesFor:(id)arg1 ;
@end

