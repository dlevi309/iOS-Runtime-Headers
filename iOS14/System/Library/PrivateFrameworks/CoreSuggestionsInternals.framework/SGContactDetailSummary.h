/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSArray, NSString;

@interface SGContactDetailSummary : NSObject {

	NSArray* _phones;
	NSString* _email;
	NSArray* _imAddresses;

}

@property (nonatomic,copy) NSArray * phones;                   //@synthesize phones=_phones - In the implementation block
@property (nonatomic,copy) NSString * email;                   //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSArray * imAddresses;              //@synthesize imAddresses=_imAddresses - In the implementation block
-(void)setEmail:(NSString *)arg1 ;
-(void)setPhones:(NSArray *)arg1 ;
-(NSArray *)phones;
-(NSString *)email;
-(NSArray *)imAddresses;
-(void)setImAddresses:(NSArray *)arg1 ;
@end

