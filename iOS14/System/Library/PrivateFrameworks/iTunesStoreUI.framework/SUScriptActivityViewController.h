/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController {

	NSArray* _applicationActivities;
	NSArray* _providers;

}

@property (copy) id excludedActivityTypes; 
@property (readonly) NSString * activityTypeAddToReadingList; 
@property (readonly) NSString * activityTypeAssignToContact; 
@property (readonly) NSString * activityTypeCopyToPasteboard; 
@property (readonly) NSString * activityTypeMail; 
@property (readonly) NSString * activityTypeMessage; 
@property (readonly) NSString * activityTypePostToFacebook; 
@property (readonly) NSString * activityTypePostToFlickr; 
@property (readonly) NSString * activityTypePostToTwitter; 
@property (readonly) NSString * activityTypePostToVimeo; 
@property (readonly) NSString * activityTypePostToWeibo; 
@property (readonly) NSString * activityTypePrint; 
@property (readonly) NSString * activityTypeSaveToCameraRoll; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(id)attributeKeys;
-(id)_className;
-(id)excludedActivityTypes;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)newNativeViewController;
-(void)setTitle:(id)arg1 forActivityType:(id)arg2 ;
-(id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2 ;
-(NSString *)activityTypeAddToReadingList;
-(NSString *)activityTypeAssignToContact;
-(NSString *)activityTypeCopyToPasteboard;
-(NSString *)activityTypeMail;
-(NSString *)activityTypeMessage;
-(NSString *)activityTypePostToFacebook;
-(NSString *)activityTypePostToFlickr;
-(NSString *)activityTypePostToTwitter;
-(NSString *)activityTypePostToVimeo;
-(NSString *)activityTypePostToWeibo;
-(NSString *)activityTypePrint;
-(NSString *)activityTypeSaveToCameraRoll;
@end

