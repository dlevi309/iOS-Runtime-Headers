/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)URLBagKey;
-(id)init;
-(void)setURLBagKey:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSNumber *)timeoutInterval;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(id)URLs;
-(id)_className;
-(void)setURLs:(id)arg1 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
@end

