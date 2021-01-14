/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSData;

@interface MRESignature : NSObject {

	unsigned long long _trackID;
	NSData* _signatureData;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSData * signatureData;                  //@synthesize signatureData=_signatureData - In the implementation block
-(unsigned long long)trackID;
-(NSData *)signatureData;
-(void)dealloc;
-(id)initWithSignatureData:(id)arg1 trackID:(unsigned long long)arg2 ;
@end

