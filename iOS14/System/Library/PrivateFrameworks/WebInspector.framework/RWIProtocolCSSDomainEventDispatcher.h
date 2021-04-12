/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolCSSDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_mediaQueryResultChanged;
-(void)safe_styleSheetChangedWithStyleSheetId:(id)arg1 ;
-(void)safe_styleSheetAddedWithHeader:(id)arg1 ;
-(void)safe_styleSheetRemovedWithStyleSheetId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)mediaQueryResultChanged;
-(void)styleSheetChangedWithStyleSheetId:(id)arg1 ;
-(void)styleSheetAddedWithHeader:(id)arg1 ;
-(void)styleSheetRemovedWithStyleSheetId:(id)arg1 ;
@end

