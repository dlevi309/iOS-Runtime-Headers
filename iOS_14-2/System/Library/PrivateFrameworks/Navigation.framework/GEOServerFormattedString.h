/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class NSArray;


@protocol GEOServerFormattedString <NSObject,NSCoding>
@property (nonatomic,readonly) NSArray * formatStrings; 
@property (nonatomic,readonly) NSArray * formatTokens; 
@property (nonatomic,readonly) NSArray * separators; 
@property (nonatomic,readonly) NSArray * formatStyles; 
@property (nonatomic,readonly) id<GEOServerConditionalString> alternativeString; 
@required
-(NSArray *)formatStrings;
-(NSArray *)formatTokens;
-(id<GEOServerConditionalString>)alternativeString;
-(NSArray *)formatStyles;
-(NSArray *)separators;

@end

