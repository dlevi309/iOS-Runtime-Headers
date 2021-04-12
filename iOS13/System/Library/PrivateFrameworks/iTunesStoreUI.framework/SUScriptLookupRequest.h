/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSLookupRequest, NSString;

@interface SUScriptLookupRequest : SUScriptObject {

	SSLookupRequest* _request;

}

@property (retain) id authenticatesIfNeeded; 
@property (copy) NSString * keyProfile; 
@property (assign) long long localizationStyle; 
@property (readonly) long long localizationStyleDevice; 
@property (readonly) long long localizationStyleServer; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_className;
-(id)attributeKeys;
-(void)setKeyProfile:(NSString *)arg1 ;
-(NSString *)keyProfile;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)localizationStyle;
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)startWithLookupFunction:(id)arg1 ;
-(long long)localizationStyleDevice;
-(long long)localizationStyleServer;
@end

