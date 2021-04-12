/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
*/


@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject {

	DHKey* _dhKey;
	NGMPublicPreKey* _publicPrekey;

}

@property (nonatomic,readonly) DHKey * dhKey;                               //@synthesize dhKey=_dhKey - In the implementation block
@property (nonatomic,readonly) NGMPublicPreKey * publicPrekey;              //@synthesize publicPrekey=_publicPrekey - In the implementation block
-(id)description;
-(BOOL)delete;
-(DHKey *)dhKey;
-(NGMPublicPreKey *)publicPrekey;
-(id)initWithPrekeySignedBy:(id)arg1 error:(id*)arg2 ;
-(id)initWithPBPrekey:(id)arg1 error:(id*)arg2 ;
-(id)pbDevicePrekey;
@end

