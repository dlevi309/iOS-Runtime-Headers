/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDate, NSDictionary, ICStoreDialogResponse, NSError;

@interface ICRadioResponse : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * contentDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) long long version; 
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSError * serverError; 
-(long long)version;
-(NSDate *)expirationDate;
-(NSDictionary *)responseDictionary;
-(NSError *)serverError;
-(ICStoreDialogResponse *)dialog;
-(id)initWithURLResponse:(id)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSDictionary *)contentDictionary;
@end

