/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ASEnhancedSearchStoreResponse : ASItem {

	NSString* _store;
	NSNumber* _status;
	NSNumber* _total;
	NSString* _range;
	NSMutableArray* _mResults;

}

@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy) NSString * store;                         //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSNumber * total;                         //@synthesize total=_total - In the implementation block
@property (nonatomic,copy) NSString * range;                         //@synthesize range=_range - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSArray *)results;
-(NSNumber *)status;
-(NSString *)range;
-(NSString *)store;
-(void)setStore:(NSString *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setRange:(NSString *)arg1 ;
-(NSNumber *)total;
-(void)addResult:(id)arg1 ;
-(void)setTotal:(NSNumber *)arg1 ;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
@end

