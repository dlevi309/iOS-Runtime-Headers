/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject {

	DHKey* _dhKey;
	NGMPublicPreKey* _publicPrekey;

}

@property (nonatomic,readonly) DHKey * dhKey;                               //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NGMPublicPreKey * publicPrekey;              //@synthesize publicPrekey=_publicPrekey - In the implementation block
-(BOOL)delete;
-(DHKey *)dhKey;
-(id)pbDevicePrekey;
-(id)description;
-(id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2 ;
-(NGMPublicPreKey *)publicPrekey;
-(id)initWithPBPrekey:(id)arg1 error:(id*)arg2 ;
@end

