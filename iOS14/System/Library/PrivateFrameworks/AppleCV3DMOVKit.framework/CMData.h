/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CMData : NSObject <NSSecureCoding> {

	BOOL _isSent;
	double _timestamp;
	long long _type;
	NSData* _data;
	NSData* _additionalData;
	NSString* _sourcePeerDisplayName;

}

@property (assign,nonatomic) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * additionalData;                       //@synthesize additionalData=_additionalData - In the implementation block
@property (nonatomic,retain) NSString * sourcePeerDisplayName;              //@synthesize sourcePeerDisplayName=_sourcePeerDisplayName - In the implementation block
@property (assign,nonatomic) BOOL isSent;                                   //@synthesize isSent=_isSent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isSent;
-(NSData *)data;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setAdditionalData:(NSData *)arg1 ;
-(void)setSourcePeerDisplayName:(NSString *)arg1 ;
-(NSData *)additionalData;
-(NSString *)sourcePeerDisplayName;
-(id)initWithMessage:(id)arg1 timestamp:(double)arg2 isSent:(BOOL)arg3 ;
@end

