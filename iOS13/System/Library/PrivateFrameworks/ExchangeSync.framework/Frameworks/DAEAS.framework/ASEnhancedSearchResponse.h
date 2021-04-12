/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSMutableArray, NSArray;

@interface ASEnhancedSearchResponse : ASItem {

	int _expectedResultType;
	NSNumber* _status;
	NSMutableArray* _mResults;

}

@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
@property (nonatomic,readonly) NSArray * stores; 
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int expectedResultType;                 //@synthesize expectedResultType=_expectedResultType - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSArray *)stores;
-(int)expectedResultType;
-(void)setExpectedResultType:(int)arg1 ;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
-(void)addStoreResponse:(id)arg1 ;
@end

