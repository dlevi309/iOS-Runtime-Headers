/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _countryCode;
	BOOL _isMe;
	IMHandle* _imHandle;
	BOOL _haveFetchedIMHandle;

}

@property (readonly) NSString * address;                   //@synthesize address=_address - In the implementation block
@property (readonly) BOOL isMe;                            //@synthesize isMe=_isMe - In the implementation block
@property (readonly) BOOL isBusiness; 
@property (readonly) NSString * businessName; 
@property (readonly) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) NSString * displayName; 
@property (readonly) NSString * cnContactID; 
-(BOOL)isMe;
-(NSString *)countryCode;
-(id)handle;
-(BOOL)isBusiness;
-(id)description;
-(NSString *)address;
-(unsigned long long)hash;
-(NSString *)businessName;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(BOOL)arg3 ;
-(NSString *)cnContactID;
@end

