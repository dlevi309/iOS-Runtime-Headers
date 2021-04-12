/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem {

	NSString* _emailAddress;
	NSNumber* _easStatus;
	NSMutableArray* _mRecipients;

}

@property (nonatomic,retain) NSString * emailAddress;                                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * mRecipients;                           //@synthesize mRecipients=_mRecipients - In the implementation block
@property (nonatomic,readonly) NSArray * recipients; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)recipients;
-(void)addRecipient:(id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)description;
-(NSNumber *)easStatus;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mRecipients;
-(void)setMRecipients:(NSMutableArray *)arg1 ;
@end

