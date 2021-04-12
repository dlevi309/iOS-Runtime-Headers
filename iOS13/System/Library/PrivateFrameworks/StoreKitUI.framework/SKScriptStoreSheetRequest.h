/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class WebScriptObject, NSString;

@interface SKScriptStoreSheetRequest : SUScriptObject {

	long long _pageStyle;
	WebScriptObject* _productParameters;
	NSString* _productURL;

}

@property (assign) long long productPageStyle; 
@property (retain) WebScriptObject * productParameters; 
@property (retain) NSString * productURL; 
@property (readonly) long long productPageStyleAutomatic; 
@property (readonly) long long productPageStyleBanner; 
@property (readonly) long long productPageStylePad; 
@property (readonly) long long productPageStylePhone; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)_className;
-(id)attributeKeys;
-(void)setProductPageStyle:(long long)arg1 ;
-(long long)productPageStyle;
-(WebScriptObject *)productParameters;
-(void)setProductParameters:(WebScriptObject *)arg1 ;
-(NSString *)productURL;
-(void)setProductURL:(NSString *)arg1 ;
-(id)_safeValueForValue:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)newNativeStorePageRequest;
-(long long)productPageStyleAutomatic;
-(long long)productPageStyleBanner;
-(long long)productPageStylePad;
-(long long)productPageStylePhone;
@end

