/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(IDSURI *)URI;
-(BOOL)isUserVisible;
-(id)initWithURI:(id)arg1 isUserVisible:(BOOL)arg2 validationStatus:(long long)arg3 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(long long)validationStatus;
@end

