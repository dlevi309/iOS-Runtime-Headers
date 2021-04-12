/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (assign,nonatomic) BOOL onlyReturnNextItem; 
@property (nonatomic,copy) NSString * siriLocale; 
@property (nonatomic,copy) NSString * title; 
+(id)searchPlayableContentFromWatchList;
+(id)searchPlayableContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(BOOL)onlyReturnNextItem;
-(void)setOnlyReturnNextItem:(BOOL)arg1 ;
-(NSString *)siriLocale;
-(void)setSiriLocale:(NSString *)arg1 ;
@end

