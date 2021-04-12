/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

