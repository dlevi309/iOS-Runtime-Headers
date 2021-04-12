/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)addClass:(id)arg1 ;
-(NSArray *)classes;
-(BOOL)_isSearchResult;
-(NSMutableArray *)mClasses;
-(void)setMClasses:(NSMutableArray *)arg1 ;
@end

