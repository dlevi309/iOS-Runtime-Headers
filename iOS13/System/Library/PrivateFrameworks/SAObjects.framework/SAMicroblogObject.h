/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, NSString, NSDate, NSDictionary, SALocation, NSNumber, NSArray, SAPersonAttribute;

@interface SAMicroblogObject : SADomainObject

@property (nonatomic,copy) NSURL * attachment; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) NSDictionary * hashtagAlternatives; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSURL * refereceId; 
@property (nonatomic,retain) SAPersonAttribute * sender; 
@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSDictionary * socialProfileReferences; 
@property (nonatomic,copy) NSNumber * useLocation; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocation *)location;
-(NSString *)serviceType;
-(SAPersonAttribute *)sender;
-(NSArray *)recipients;
-(void)setSender:(SAPersonAttribute *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
-(NSString *)content;
-(NSURL *)attachment;
-(void)setAttachment:(NSURL *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)outgoing;
-(NSDictionary *)hashtagAlternatives;
-(void)setHashtagAlternatives:(NSDictionary *)arg1 ;
-(NSURL *)refereceId;
-(void)setRefereceId:(NSURL *)arg1 ;
-(NSDictionary *)socialProfileReferences;
-(void)setSocialProfileReferences:(NSDictionary *)arg1 ;
-(NSNumber *)useLocation;
-(void)setUseLocation:(NSNumber *)arg1 ;
@end

