/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class NSTimeZone, NSString;


@protocol GEOServerFormatTokenTimeStampValue <NSObject,NSCoding>
@property (nonatomic,readonly) double timeStamp; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) NSString * formatPattern; 
@required
-(NSTimeZone *)timeZone;
-(double)timeStamp;
-(NSString *)formatPattern;

@end

