/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (assign) double timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) long long type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * additionalData;                       //@synthesize additionalData=_additionalData - In the implementation block
@property (nonatomic,retain) NSString * sourcePeerDisplayName;              //@synthesize sourcePeerDisplayName=_sourcePeerDisplayName - In the implementation block
@property (assign) BOOL isSent;                                             //@synthesize isSent=_isSent - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isSent;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setAdditionalData:(NSData *)arg1 ;
-(void)setSourcePeerDisplayName:(NSString *)arg1 ;
-(NSData *)additionalData;
-(NSString *)sourcePeerDisplayName;
-(id)initWithMessage:(id)arg1 timestamp:(double)arg2 isSent:(BOOL)arg3 ;
@end

