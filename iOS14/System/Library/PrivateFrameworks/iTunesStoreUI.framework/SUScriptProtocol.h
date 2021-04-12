/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject

@property (retain) NSArray * allowedOrientations; 
@property (readonly) NSString * clientIdentifier; 
@property (retain) NSString * copyright; 
@property (assign) BOOL excludeFromNavigationHistory; 
@property (retain) SUScriptURLRequest * overlayBackgroundURLRequest; 
@property (readonly) NSString * protocolVersion; 
@property (assign) BOOL shouldShowInOverlay; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)copyright;
-(NSString *)protocolVersion;
-(id)attributeKeys;
-(void)setCopyright:(NSString *)arg1 ;
-(NSArray *)allowedOrientations;
-(id)_className;
-(NSString *)clientIdentifier;
-(void)setAllowedOrientations:(NSArray *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_copyProtocol;
-(void)_setProtocol:(id)arg1 ;
-(id)_webThreadValueForProtocolKey:(id)arg1 ;
-(void)_setValue:(id)arg1 forProtocolKey:(id)arg2 ;
-(void)setValuesFromDictionary:(id)arg1 ;
-(BOOL)excludeFromNavigationHistory;
-(SUScriptURLRequest *)overlayBackgroundURLRequest;
-(void)setExcludeFromNavigationHistory:(BOOL)arg1 ;
-(void)setOverlayBackgroundURLRequest:(SUScriptURLRequest *)arg1 ;
-(void)setShouldShowInOverlay:(BOOL)arg1 ;
-(BOOL)shouldShowInOverlay;
@end

