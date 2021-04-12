/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableDictionary;

@interface CRLanguageResourcesManager : NSObject {

	NSMutableDictionary* _languageResourceStacks;

}

@property (retain) NSMutableDictionary * languageResourceStacks;              //@synthesize languageResourceStacks=_languageResourceStacks - In the implementation block
+(id)sharedManager;
-(void)addSubscriber:(id)arg1 forLocale:(id)arg2 ;
-(void)removeSubscriber:(id)arg1 forLocale:(id)arg2 ;
-(BOOL)lockResourcesForLocale:(id)arg1 sender:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setLanguageResourceStacks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)languageResourceStacks;
@end

