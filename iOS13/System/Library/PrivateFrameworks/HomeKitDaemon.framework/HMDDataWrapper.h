/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSData;

@interface HMDDataWrapper : HMDFieldWrapper {

	NSData* _field;

}

@property (nonatomic,retain) NSData * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSData *)field;
-(void)setField:(NSData *)arg1 ;
@end

