/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


@class NSDate, NSString;

@interface WBSParsecSubscriptionInfo : NSObject {

	NSDate* _expirationDate;
	NSString* _type;

}

@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                       //@synthesize type=_type - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(id)initWithString:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)type;
-(id)_initWithDictionary:(id)arg1 ;
@end

