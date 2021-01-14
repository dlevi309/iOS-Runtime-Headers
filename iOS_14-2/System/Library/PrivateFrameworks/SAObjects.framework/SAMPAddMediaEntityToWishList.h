/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * adamId; 
+(id)addMediaEntityToWishList;
+(id)addMediaEntityToWishListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
@end

