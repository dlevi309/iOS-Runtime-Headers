/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * siriLocale; 
@property (nonatomic,copy) NSString * title; 
+(id)removeContentFromWatchList;
+(id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(void)setSiriLocale:(NSString *)arg1 ;
-(NSString *)siriLocale;
-(NSString *)title;
@end

