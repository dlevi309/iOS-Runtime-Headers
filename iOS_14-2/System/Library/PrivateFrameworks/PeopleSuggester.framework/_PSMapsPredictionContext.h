/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBundleID:(NSString *)arg1 ;
-(NSDate *)suggestionDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSuggestionDate:(NSDate *)arg1 ;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)navigationStartLocationId;
-(NSString *)navigationEndLocationId;
-(void)setNavigationStartLocationId:(NSString *)arg1 ;
-(void)setNavigationEndLocationId:(NSString *)arg1 ;
@end

