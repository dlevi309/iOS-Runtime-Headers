/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTodayPrivateDataTransaction.h>

@class NSString, NSDate;

@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction> {

	NSString* _articleID;
	long long _articleVersion;
	NSDate* _readDate;

}

@property (nonatomic,copy) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) long long articleVersion;              //@synthesize articleVersion=_articleVersion - In the implementation block
@property (nonatomic,copy) NSDate * readDate;                       //@synthesize readDate=_readDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(long long)articleVersion;
-(NSDate *)readDate;
-(id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3 ;
-(void)performWithPrivateDataContext:(id)arg1 ;
-(void)performWithTodayPrivateData:(id)arg1 ;
-(void)setArticleVersion:(long long)arg1 ;
-(void)setReadDate:(NSDate *)arg1 ;
@end

