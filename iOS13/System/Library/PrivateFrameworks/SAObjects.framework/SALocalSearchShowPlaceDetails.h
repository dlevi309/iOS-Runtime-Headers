/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SALocalSearchShowPlaceDetails : SABaseClientBoundCommand

@property (assign,nonatomic) long long itemIndex; 
+(id)showPlaceDetails;
+(id)showPlaceDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)itemIndex;
-(void)setItemIndex:(long long)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

