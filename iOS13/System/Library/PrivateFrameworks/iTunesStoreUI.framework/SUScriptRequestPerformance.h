/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISURLRequestPerformance, NSString;

@interface SUScriptRequestPerformance : SUScriptObject {

	ISURLRequestPerformance* _performance;

}

@property (readonly) double finishInterval; 
@property (readonly) NSString * JSONHeaders; 
@property (readonly) double receivedResponseInterval; 
@property (readonly) double renderBeginInterval; 
@property (readonly) double renderEndInterval; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(double)receivedResponseInterval;
-(double)finishInterval;
-(id)scriptAttributeKeys;
-(id)initWithRequestPerformance:(id)arg1 ;
-(double)renderEndInterval;
-(double)renderBeginInterval;
-(NSString *)JSONHeaders;
@end

