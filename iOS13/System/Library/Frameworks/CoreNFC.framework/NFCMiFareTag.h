/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTag.h>
#import <libobjc.A.dylib/NFCMiFareTag.h>
@class NSData;


@protocol NFCMiFareTag <NFCTag,NFCNDEFTag>
@property (nonatomic,readonly) unsigned long long mifareFamily; 
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,copy,readonly) NSData * historicalBytes; 
@required
-(NSData *)identifier;
-(NSData *)historicalBytes;
-(void)sendMiFareCommand:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendMiFareISO7816Command:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)mifareFamily;

@end


@class NSData, NSString;

@interface NFCMiFareTag : NFCTag <NFCMiFareTag> {

	unsigned long long _mifareFamily;

}

@property (assign,nonatomic) unsigned long long mifareFamily;                    //@synthesize mifareFamily=_mifareFamily - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,copy,readonly) NSData * historicalBytes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSession:(id)arg1 tag:(id)arg2 startupConfig:(long long)arg3 ;
-(void)sendMiFareCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendMiFareISO7816Command:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)mifareFamily;
-(void)setMifareFamily:(unsigned long long)arg1 ;
@end

