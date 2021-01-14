/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSURL, SKUIReviewMetadata, NSNumber, NSString;

@interface SUScriptReview : SUScriptObject {

	NSURL* _infoURL;
	SKUIReviewMetadata* _review;

}

@property (readonly) NSNumber * adamID; 
@property (retain) NSString * body; 
@property (readonly) id hasSavedDraft; 
@property (retain) NSString * infoURL; 
@property (retain) NSString * itemType; 
@property (retain) NSString * nickname; 
@property (retain) id nicknameIsConfirmed; 
@property (retain) NSNumber * rating; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSNumber *)rating;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)nickname;
-(id)attributeKeys;
-(void)setRating:(NSNumber *)arg1 ;
-(void)setItemType:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSNumber *)adamID;
-(NSString *)infoURL;
-(void)setNickname:(NSString *)arg1 ;
-(id)_className;
-(NSString *)title;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)copyReview;
-(id)initWithReview:(id)arg1 ;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)hasSavedDraft;
-(id)nicknameIsConfirmed;
-(void)setInfoURL:(NSString *)arg1 ;
-(void)setNicknameIsConfirmed:(id)arg1 ;
@end

