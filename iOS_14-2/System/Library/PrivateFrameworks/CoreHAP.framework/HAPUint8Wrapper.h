/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPFieldWrapper.h>

@class NSNumber;

@interface HAPUint8Wrapper : HAPFieldWrapper {

	NSNumber* _field;

}

@property (nonatomic,retain) NSNumber * field;              //@synthesize field=_field - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 ;
-(NSNumber *)field;
-(void)setField:(NSNumber *)arg1 ;
@end

