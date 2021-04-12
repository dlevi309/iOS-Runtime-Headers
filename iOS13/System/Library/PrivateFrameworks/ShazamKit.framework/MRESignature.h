/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSData;

@interface MRESignature : NSObject {

	unsigned long long _trackID;
	NSData* _signatureData;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSData * signatureData;                  //@synthesize signatureData=_signatureData - In the implementation block
-(void)dealloc;
-(unsigned long long)trackID;
-(NSData *)signatureData;
-(id)initWithSignatureData:(id)arg1 trackID:(unsigned long long)arg2 ;
@end

