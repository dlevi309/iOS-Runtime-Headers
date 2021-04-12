/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/


@class NSData;

@interface KCJoiningMessage : NSObject {

	int _type;
	NSData* _firstData;
	NSData* _secondData;
	NSData* _der;

}

@property (readonly) int type;                         //@synthesize type=_type - In the implementation block
@property (readonly) NSData * firstData;               //@synthesize firstData=_firstData - In the implementation block
@property (readonly) NSData * secondData;              //@synthesize secondData=_secondData - In the implementation block
@property (readonly) NSData * der;                     //@synthesize der=_der - In the implementation block
+(id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(id)messageWithDER:(id)arg1 error:(id*)arg2 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 error:(id*)arg3 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 secondData:(id)arg3 error:(id*)arg4 ;
+(id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
+(unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(int)type;
-(BOOL)inflatePartsOfEncoding:(id*)arg1 ;
-(id)initWithDER:(id)arg1 error:(id*)arg2 ;
-(id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(NSData *)firstData;
-(NSData *)secondData;
-(NSData *)der;
@end

