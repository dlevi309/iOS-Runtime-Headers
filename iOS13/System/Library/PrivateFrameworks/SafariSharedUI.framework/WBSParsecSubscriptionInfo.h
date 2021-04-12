/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(id)initWithString:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)_initWithDictionary:(id)arg1 ;
@end

