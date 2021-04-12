/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCTPNRResponseData.h>
@class NSString, NSData;


@protocol IDSCTPNRResponseData <NSObject>
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * phoneBookNumber; 
@property (nonatomic,readonly) NSData * signature; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSString * status; 
@required
-(BOOL)success;
-(NSData *)signature;
-(NSString *)phoneBookNumber;
-(NSString *)phoneNumber;
-(NSString *)status;

@end


@class NSString, NSData;

@interface IDSCTPNRResponseData : NSObject <IDSCTPNRResponseData> {

	BOOL _success;
	NSString* _phoneNumber;
	NSString* _phoneBookNumber;
	NSData* _signature;
	NSString* _status;

}

@property (nonatomic,retain) NSString * phoneNumber;                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
@property (nonatomic,retain) NSData * signature;                      //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) BOOL success;                            //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSString * status;                       //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSData *)signature;
-(NSString *)phoneBookNumber;
-(id)initWithCTResponse:(id)arg1 phoneBookNumber:(id)arg2 ;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)status;
@end

