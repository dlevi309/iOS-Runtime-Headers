/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSMutableURLRequestProperties, NSNumber, NSString;

@interface SUScriptURLRequest : SUScriptObject {

	SSMutableURLRequestProperties* _requestProperties;

}

@property (copy) NSNumber * timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (copy) id URLs; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(id)_className;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(NSNumber *)timeoutInterval;
-(id)attributeKeys;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(id)scriptAttributeKeys;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
@end

