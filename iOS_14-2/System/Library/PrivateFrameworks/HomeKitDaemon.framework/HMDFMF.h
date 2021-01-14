/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSNumber;

@interface HMDFMF : NSObject {

	unsigned long long _value;

}

@property (nonatomic,readonly) NSNumber * number; 
@property (nonatomic,readonly) unsigned long long value;              //@synthesize value=_value - In the implementation block
+(id)fmfStatusWithDict:(id)arg1 ;
+(id)fmfStatusWithValue:(unsigned long long)arg1 ;
+(id)fmfStatusWithNumber:(id)arg1 ;
+(id)fmfStatusWithMessage:(id)arg1 ;
+(id)fmfStatusWithCoder:(id)arg1 ;
-(NSNumber *)number;
-(id)description;
-(id)initWithNumber:(id)arg1 ;
-(unsigned long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)addToCoder:(id)arg1 ;
-(void)addToPayload:(id)arg1 ;
@end

