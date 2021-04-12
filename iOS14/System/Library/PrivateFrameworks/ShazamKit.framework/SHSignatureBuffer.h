/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSMutableArray, SHSignature;

@interface SHSignatureBuffer : NSObject {

	long long _qos;
	double _maximumSignatureLength;
	NSMutableArray* _allSignatures;

}

@property (assign,nonatomic) double maximumSignatureLength;               //@synthesize maximumSignatureLength=_maximumSignatureLength - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSignatures;              //@synthesize allSignatures=_allSignatures - In the implementation block
@property (nonatomic,readonly) SHSignature * nextSignature; 
@property (nonatomic,readonly) long long qos;                             //@synthesize qos=_qos - In the implementation block
-(long long)qos;
-(double)length;
-(double)maximumSignatureLength;
-(id)initWithMaximumSignatureLength:(double)arg1 qos:(long long)arg2 ;
-(void)flow:(id)arg1 time:(id)arg2 ;
-(void)finishedMatchingSignatureWithID:(id)arg1 ;
-(SHSignature *)nextSignature;
-(void)setMaximumSignatureLength:(double)arg1 ;
-(NSMutableArray *)allSignatures;
-(BOOL)checkFlowError:(id)arg1 ;
-(void)discardOldestSignatureWithID:(id)arg1 ;
-(void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)arg1 ;
-(void)setAllSignatures:(NSMutableArray *)arg1 ;
@end

