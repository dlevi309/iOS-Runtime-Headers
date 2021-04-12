/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSArray *)recipients;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(NSNumber *)easStatus;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mRecipients;
-(void)setMRecipients:(NSMutableArray *)arg1 ;
@end

