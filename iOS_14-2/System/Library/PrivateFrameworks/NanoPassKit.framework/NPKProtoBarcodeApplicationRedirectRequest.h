/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoBarcodeApplicationRedirectRequest : PBRequest <NSCopying> {

	NSString* _appLaunchToken;
	NSData* _passData;
	NSData* _transactionData;

}

@property (nonatomic,readonly) BOOL hasPassData; 
@property (nonatomic,retain) NSData * passData;                      //@synthesize passData=_passData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionData; 
@property (nonatomic,retain) NSData * transactionData;               //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) BOOL hasAppLaunchToken; 
@property (nonatomic,retain) NSString * appLaunchToken;              //@synthesize appLaunchToken=_appLaunchToken - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTransactionData:(NSData *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)passData;
-(NSData *)transactionData;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPassData:(NSData *)arg1 ;
-(void)setAppLaunchToken:(NSString *)arg1 ;
-(BOOL)hasPassData;
-(BOOL)hasTransactionData;
-(BOOL)hasAppLaunchToken;
-(NSString *)appLaunchToken;
@end

