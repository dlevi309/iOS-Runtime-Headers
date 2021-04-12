/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/ISURLBagObserver.h>

@class SSMetricsController, NSString;

@interface SUScriptMetricsController : SUScriptObject <ISURLBagObserver> {

	SSMetricsController* _metricsController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(void)bagDidChange:(id)arg1 ;
-(void)_configureWithBagDictionary:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionFunction:(id)arg1 ;
-(void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3 ;
@end

