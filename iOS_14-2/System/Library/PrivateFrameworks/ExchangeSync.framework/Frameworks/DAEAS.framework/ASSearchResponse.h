/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASSearchResponse : ASItem {

	int _expectedResultType;
	NSArray* _stores;
	NSNumber* _status;

}

@property (nonatomic,retain) NSArray * stores;                    //@synthesize stores=_stores - In the implementation block
@property (nonatomic,copy) NSNumber * status;                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int expectedResultType;              //@synthesize expectedResultType=_expectedResultType - In the implementation block
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
-(void)setStores:(NSArray *)arg1 ;
@end

