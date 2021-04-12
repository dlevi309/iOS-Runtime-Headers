/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/ASCOfferMetadata.h>

@class NSString;

@interface ASCTextOfferMetadata : ASCOfferMetadata {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isText;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

