/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)attributeKeys;
-(NSString *)itemType;
-(NSNumber *)rating;
-(void)setRating:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)setItemType:(NSString *)arg1 ;
-(id)scriptAttributeKeys;
-(id)copyReview;
-(id)initWithReview:(id)arg1 ;
-(id)removeDraft;
-(id)restoreFromDraft;
-(id)saveAsDraft;
-(id)hasSavedDraft;
-(NSString *)infoURL;
-(id)nicknameIsConfirmed;
-(void)setInfoURL:(NSString *)arg1 ;
-(void)setNicknameIsConfirmed:(id)arg1 ;
@end

