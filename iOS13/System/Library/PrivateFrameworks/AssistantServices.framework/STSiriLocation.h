/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)resultType;
-(void)setResultType:(long long)arg1 ;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(NSURL *)addressBookID;
-(void)setAddressBookID:(NSURL *)arg1 ;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(NSData *)geoResult;
-(void)setGeoResult:(NSData *)arg1 ;
@end

