/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSString;

@interface CTCall : NSObject {

	NSString* _callState;
	NSString* _callID;

}

@property (nonatomic,copy) NSString * callState;              //@synthesize callState=_callState - In the implementation block
@property (nonatomic,copy) NSString * callID;                 //@synthesize callID=_callID - In the implementation block
+(id)callForCXCall:(id)arg1 ;
+(id)callForCTCallRef:(CTCallRef)arg1 ;
-(NSString *)callID;
-(void)setCallID:(NSString *)arg1 ;
-(void)setCallState:(NSString *)arg1 ;
-(id)description;
-(NSString *)callState;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

