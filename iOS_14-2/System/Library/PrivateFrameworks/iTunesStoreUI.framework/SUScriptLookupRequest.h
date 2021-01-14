/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)keyProfile;
-(void)setKeyProfile:(NSString *)arg1 ;
-(id)init;
-(id)attributeKeys;
-(id)valueForRequestParameter:(id)arg1 ;
-(long long)localizationStyle;
-(void)setLocalizationStyle:(long long)arg1 ;
-(id)authenticatesIfNeeded;
-(void)setAuthenticatesIfNeeded:(id)arg1 ;
-(id)_className;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)startWithLookupFunction:(id)arg1 ;
-(long long)localizationStyleDevice;
-(long long)localizationStyleServer;
@end

