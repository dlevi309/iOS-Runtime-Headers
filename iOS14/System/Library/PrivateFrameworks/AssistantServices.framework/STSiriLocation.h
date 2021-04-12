/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFTranscriptionType.h>

@class NSURL, NSString, NSData;

@interface STSiriLocation : NSObject <AFTranscriptionType> {

	NSURL* _addressBookID;
	NSString* _addressLabel;
	NSString* _contactName;
	NSData* _geoResult;
	long long _resultType;

}

@property (nonatomic,copy) NSURL * addressBookID;                   //@synthesize addressBookID=_addressBookID - In the implementation block
@property (nonatomic,copy) NSString * addressLabel;                 //@synthesize addressLabel=_addressLabel - In the implementation block
@property (nonatomic,copy) NSString * contactName;                  //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSData * geoResult;                      //@synthesize geoResult=_geoResult - In the implementation block
@property (assign,nonatomic) long long resultType;                  //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setResultType:(long long)arg1 ;
-(NSString *)contactName;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)resultType;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)geoResult;
-(NSURL *)addressBookID;
-(void)setAddressBookID:(NSURL *)arg1 ;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactName:(NSString *)arg1 ;
-(void)setGeoResult:(NSData *)arg1 ;
@end

