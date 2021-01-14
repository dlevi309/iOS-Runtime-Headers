/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)articleVersion;
-(id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3 ;
-(void)performWithPrivateDataContext:(id)arg1 ;
-(void)setArticleVersion:(long long)arg1 ;
-(void)performWithTodayPrivateData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)articleID;
-(NSDate *)readDate;
-(void)setReadDate:(NSDate *)arg1 ;
-(void)setArticleID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

