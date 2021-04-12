/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDFieldWrapper : HMFObject {

	long long _tlvid;
	NSString* _name;

}

@property (assign,nonatomic) long long tlvid;              //@synthesize tlvid=_tlvid - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithTlvId:(unsigned long long)arg1 name:(id)arg2 ;
-(long long)tlvid;
-(void)setTlvid:(long long)arg1 ;
@end

