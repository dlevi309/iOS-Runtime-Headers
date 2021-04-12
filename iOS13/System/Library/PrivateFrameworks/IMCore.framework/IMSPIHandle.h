/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, IMPerson;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _countryCode;
	BOOL _isMe;
	IMPerson* _imPerson;
	BOOL _haveFetchedIMPerson;

}

@property (readonly) NSString * address;                   //@synthesize address=_address - In the implementation block
@property (readonly) BOOL isMe;                            //@synthesize isMe=_isMe - In the implementation block
@property (readonly) BOOL isBusiness; 
@property (readonly) NSString * businessName; 
@property (readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * cnContactID; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)countryCode;
-(NSString *)address;
-(NSString *)displayName;
-(BOOL)isMe;
-(id)person;
-(BOOL)isBusiness;
-(NSString *)cnContactID;
-(NSString *)businessName;
-(id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3 ;
@end

