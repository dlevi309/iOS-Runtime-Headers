/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASEmailItem.h>

@class NSMutableArray, NSArray;

@interface ASMailboxSearchResult : ASEmailItem {

	NSMutableArray* _mClasses;

}

@property (nonatomic,retain) NSMutableArray * mClasses;              //@synthesize mClasses=_mClasses - In the implementation block
@property (nonatomic,readonly) NSArray * classes; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(NSArray *)classes;
-(id)description;
-(BOOL)_isSearchResult;
-(void)addClass:(id)arg1 ;
-(NSMutableArray *)mClasses;
-(void)setMClasses:(NSMutableArray *)arg1 ;
@end

