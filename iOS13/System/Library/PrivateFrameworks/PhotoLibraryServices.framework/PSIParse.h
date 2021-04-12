/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSString, PSIDateFilter;

@interface PSIParse : NSObject {

	NSArray* _tokens;
	NSString* _string;
	PSIDateFilter* _dateFilter;

}

@property (nonatomic,readonly) unsigned long long numberOfTokens; 
@property (nonatomic,copy) PSIDateFilter * dateFilter;                         //@synthesize dateFilter=_dateFilter - In the implementation block
@property (nonatomic,readonly) NSArray * datedTokens; 
-(id)description;
-(id)initWithToken:(id)arg1 ;
-(void)enumerateTokensUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfTokens;
-(id)parseByReplacingTokensInRange:(NSRange)arg1 withTokens:(id)arg2 ;
-(PSIDateFilter *)dateFilter;
-(id)tokenAtIndex:(unsigned long long)arg1 ;
-(id)parseByReplacingTokenAtIndex:(unsigned long long)arg1 withToken:(id)arg2 ;
-(void)setDateFilter:(PSIDateFilter *)arg1 ;
-(NSArray *)datedTokens;
-(id)initWithTokens:(id)arg1 fromString:(id)arg2 ;
-(id)descriptionWithToken:(id)arg1 ;
@end

