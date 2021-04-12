/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding> {

	NSDate* _suggestionDate;
	NSString* _bundleID;
	NSString* _navigationStartLocationId;
	NSString* _navigationEndLocationId;

}

@property (nonatomic,copy) NSDate * suggestionDate;                           //@synthesize suggestionDate=_suggestionDate - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * navigationStartLocationId;              //@synthesize navigationStartLocationId=_navigationStartLocationId - In the implementation block
@property (nonatomic,copy) NSString * navigationEndLocationId;                //@synthesize navigationEndLocationId=_navigationEndLocationId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)suggestionDate;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSString *)navigationStartLocationId;
-(NSString *)navigationEndLocationId;
-(void)setNavigationStartLocationId:(NSString *)arg1 ;
-(void)setNavigationEndLocationId:(NSString *)arg1 ;
@end

