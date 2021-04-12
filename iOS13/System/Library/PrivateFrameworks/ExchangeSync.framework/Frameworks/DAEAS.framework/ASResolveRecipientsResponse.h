/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsResponse : ASItem {

	NSNumber* _easStatus;
	NSMutableArray* _mResponses;
	NSArray* _responses;

}

@property (nonatomic,retain) NSMutableArray * mResponses;                            //@synthesize mResponses=_mResponses - In the implementation block
@property (nonatomic,retain) NSArray * responses;                                    //@synthesize responses=_responses - In the implementation block
@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)addResponse:(id)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(NSNumber *)easStatus;
-(void)setEASStatus:(id)arg1 ;
-(NSMutableArray *)mResponses;
-(void)setMResponses:(NSMutableArray *)arg1 ;
@end

