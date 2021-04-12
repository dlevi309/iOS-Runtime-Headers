/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)attributeKeys;
-(id)_className;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithRequestPerformance:(id)arg1 ;
-(double)renderEndInterval;
-(double)finishInterval;
-(double)receivedResponseInterval;
-(double)renderBeginInterval;
-(NSString *)JSONHeaders;
@end

