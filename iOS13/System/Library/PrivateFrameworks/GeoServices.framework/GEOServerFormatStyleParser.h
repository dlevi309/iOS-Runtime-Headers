/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface GEOServerFormatStyleParser : NSObject {

	NSString* _string;
	NSMutableArray* _styleNames;
	NSMutableArray* _styleRanges;
	NSMutableArray* _tokenRanges;
	NSArray* _results;
	NSMutableArray* _openStyleNames;
	NSMutableArray* _openStyleLocations;
	BOOL _parsed;

}

@property (nonatomic,readonly) NSArray * styles; 
@property (nonatomic,readonly) NSArray * tokenRanges; 
-(id)init;
-(id)initWithString:(id)arg1 ;
-(void)_parse;
-(void)_parseIfNeeded;
-(NSArray *)styles;
-(NSRange)rangeForStyleAtIndex:(unsigned long long)arg1 ;
-(NSArray *)tokenRanges;
-(void)enumerateStylesWithBlock:(/*^block*/id)arg1 ;
-(void)_removeTokensFromAttributedString:(id)arg1 ;
-(BOOL)_handleOpeningResult:(id)arg1 ;
-(BOOL)_handleClosingResult:(id)arg1 ;
-(void)enumerateTokenRangesForRemoval:(/*^block*/id)arg1 ;
-(id)attributedStringWithStyleAttributes:(id)arg1 defaultAttributes:(id)arg2 ;
@end

