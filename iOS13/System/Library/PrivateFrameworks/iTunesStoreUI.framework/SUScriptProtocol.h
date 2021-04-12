/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_className;
-(id)attributeKeys;
-(NSString *)clientIdentifier;
-(NSString *)protocolVersion;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)copyright;
-(NSArray *)allowedOrientations;
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

