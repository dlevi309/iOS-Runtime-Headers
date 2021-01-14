/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)stores;
-(int)expectedResultType;
-(void)setExpectedResultType:(int)arg1 ;
-(id)description;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSNumber *)status;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
-(void)addStoreResponse:(id)arg1 ;
@end

