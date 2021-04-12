/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding> {

	NSArray* _accountMetrics;
	NSString* _moreDetailsURL;

}

@property (nonatomic,retain) NSArray * accountMetrics;               //@synthesize accountMetrics=_accountMetrics - In the implementation block
@property (nonatomic,retain) NSString * moreDetailsURL;              //@synthesize moreDetailsURL=_moreDetailsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)accountMetrics;
-(void)setAccountMetrics:(NSArray *)arg1 ;
-(NSString *)moreDetailsURL;
-(void)setMoreDetailsURL:(NSString *)arg1 ;
@end

