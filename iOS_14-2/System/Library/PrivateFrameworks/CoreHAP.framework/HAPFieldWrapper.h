/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
-(long long)tlvid;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(void)setTlvid:(long long)arg1 ;
@end

