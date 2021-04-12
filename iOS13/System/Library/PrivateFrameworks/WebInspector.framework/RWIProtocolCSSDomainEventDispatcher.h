/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

