/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString, NSData;

@interface WFPEMEncoding : NSObject {

	NSString* _type;
	NSData* _data;

}

@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSData * data;                //@synthesize data=_data - In the implementation block
+(id)decodePEM:(id)arg1 error:(id*)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSString *)type;
-(id)initWithType:(id)arg1 data:(id)arg2 ;
-(id)encodedPEM;
@end

