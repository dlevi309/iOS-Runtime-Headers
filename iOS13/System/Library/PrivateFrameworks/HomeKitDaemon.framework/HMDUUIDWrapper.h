/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSUUID;

@interface HMDUUIDWrapper : HMDFieldWrapper {

	NSUUID* _field;

}

@property (nonatomic,retain) NSUUID * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSUUID *)field;
-(void)setField:(NSUUID *)arg1 ;
@end

