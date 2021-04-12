/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)accountMetrics;
-(id)init;
-(void)setAccountMetrics:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)moreDetailsURL;
-(void)setMoreDetailsURL:(NSString *)arg1 ;
@end

