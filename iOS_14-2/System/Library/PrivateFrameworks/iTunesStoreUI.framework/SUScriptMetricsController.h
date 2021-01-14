/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)bagDidChange:(id)arg1 ;
-(void)_configureWithBagDictionary:(id)arg1 ;
-(void)flushUnreportedEventsWithCompletionFunction:(id)arg1 ;
-(void)recordEventWithTopic:(id)arg1 properties:(id)arg2 completionFunction:(id)arg3 ;
@end

