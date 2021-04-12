/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSString *)arg1 ;
-(NSArray *)results;
-(void)setStore:(NSString *)arg1 ;
-(void)setTotal:(NSNumber *)arg1 ;
-(NSString *)range;
-(NSString *)store;
-(NSNumber *)total;
-(id)description;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)addResult:(id)arg1 ;
-(NSNumber *)status;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
@end

