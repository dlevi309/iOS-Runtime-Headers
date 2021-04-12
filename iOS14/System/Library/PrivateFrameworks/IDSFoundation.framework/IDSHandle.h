/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class IDSURI;

@interface IDSHandle : NSObject {

	IDSURI* _URI;
	BOOL _isUserVisible;
	long long _validationStatus;

}

@property (nonatomic,readonly) IDSURI * URI;                            //@synthesize URI=_URI - In the implementation block
@property (nonatomic,readonly) BOOL isUserVisible;                      //@synthesize isUserVisible=_isUserVisible - In the implementation block
@property (nonatomic,readonly) long long validationStatus;              //@synthesize validationStatus=_validationStatus - In the implementation block
-(id)initWithURI:(id)arg1 isUserVisible:(BOOL)arg2 validationStatus:(long long)arg3 ;
-(IDSURI *)URI;
-(long long)validationStatus;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)description;
-(BOOL)isUserVisible;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

