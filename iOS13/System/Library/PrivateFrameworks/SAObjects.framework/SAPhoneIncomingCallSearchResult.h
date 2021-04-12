/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * caller; 
@property (nonatomic,copy) NSString * incomingCallType; 
+(id)incomingCallSearchResult;
+(id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPersonAttribute *)caller;
-(void)setCaller:(SAPersonAttribute *)arg1 ;
-(id)encodedClassName;
-(NSString *)incomingCallType;
-(void)setIncomingCallType:(NSString *)arg1 ;
@end

