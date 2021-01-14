/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTag.h>
#import <libobjc.A.dylib/NFCISO7816Tag.h>
@class NSString, NSData;


@protocol NFCISO7816Tag <NFCTag,NFCNDEFTag>
@property (nonatomic,retain,readonly) NSString * initialSelectedAID; 
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,copy,readonly) NSData * historicalBytes; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL proprietaryApplicationDataCoding; 
@required
-(NSData *)applicationData;
-(NSData *)historicalBytes;
-(NSData *)identifier;
-(BOOL)proprietaryApplicationDataCoding;
-(void)sendCommandAPDU:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)initialSelectedAID;

@end


@class NSString, NSData;

@interface NFCISO7816Tag : NFCTag <NFCISO7816Tag>

@property (nonatomic,retain,readonly) NSString * initialSelectedAID; 
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,copy,readonly) NSData * historicalBytes; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL proprietaryApplicationDataCoding; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)sendCommandAPDU:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)initialSelectedAID;
@end

