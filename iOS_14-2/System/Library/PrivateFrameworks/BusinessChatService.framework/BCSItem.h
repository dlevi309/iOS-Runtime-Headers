/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <libobjc.A.dylib/BCSItemIdentifying.h>
#import <libobjc.A.dylib/BCSExpiring.h>

@class NSObject, NSDate, NSString;

@interface BCSItem : NSObject <BCSItemIdentifying, BCSExpiring> {

	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSObject * itemIdentifier; 
@property (nonatomic,readonly) long long truncatedHash; 
@property (nonatomic,readonly) long long type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(NSObject *)itemIdentifier;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(long long)type;
-(long long)truncatedHash;
-(BOOL)matchesItemIdentifying:(id)arg1 ;
@end

