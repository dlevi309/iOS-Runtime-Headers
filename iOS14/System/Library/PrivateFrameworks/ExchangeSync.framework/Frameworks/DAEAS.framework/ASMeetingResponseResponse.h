/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {

	NSMutableArray* _mSingularResponses;

}

@property (nonatomic,retain) NSMutableArray * mSingularResponses;              //@synthesize mSingularResponses=_mSingularResponses - In the implementation block
@property (nonatomic,readonly) NSArray * singularResponses; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(NSArray *)singularResponses;
-(void)setMSingularResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mSingularResponses;
-(void)_addSingularResponse:(id)arg1 ;
@end

