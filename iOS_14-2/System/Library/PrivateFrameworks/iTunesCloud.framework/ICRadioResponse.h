/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSDictionary *)responseDictionary;
-(id)initWithURLResponse:(id)arg1 ;
-(NSDictionary *)contentDictionary;
-(NSDate *)expirationDate;
-(long long)version;
@end

