/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithType:(id)arg1 data:(id)arg2 ;
-(id)encodedPEM;
@end

