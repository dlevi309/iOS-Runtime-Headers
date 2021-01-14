/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFClientSubCredentialParams : NSObject <NSSecureCoding> {

	NSString* _adamID;
	NSArray* _adamIDs;
	NSString* _title;
	NSString* _subtitle;
	NSString* _issuerID;

}

@property (nonatomic,copy) NSString * adamID;                //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy) NSArray * adamIDs;                //@synthesize adamIDs=_adamIDs - In the implementation block
@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * issuerID;              //@synthesize issuerID=_issuerID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)adamIDs;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setAdamIDs:(NSArray *)arg1 ;
-(void)setIssuerID:(NSString *)arg1 ;
-(NSString *)adamID;
-(NSString *)issuerID;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

