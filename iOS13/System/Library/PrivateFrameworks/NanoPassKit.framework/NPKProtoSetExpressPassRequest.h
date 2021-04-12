/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying> {

	NSString* _applicationIdentifier;
	NSData* _expressPassInformation;
	NSString* _uniqueID;
	BOOL _cancelOutstandingRequests;
	BOOL _requestAuthorization;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasUniqueID; 
@property (nonatomic,retain) NSString * uniqueID;                            //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL hasCancelOutstandingRequests; 
@property (assign,nonatomic) BOOL cancelOutstandingRequests;                 //@synthesize cancelOutstandingRequests=_cancelOutstandingRequests - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRequestAuthorization; 
@property (assign,nonatomic) BOOL requestAuthorization;                      //@synthesize requestAuthorization=_requestAuthorization - In the implementation block
@property (nonatomic,readonly) BOOL hasExpressPassInformation; 
@property (nonatomic,retain) NSData * expressPassInformation;                //@synthesize expressPassInformation=_expressPassInformation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uniqueID;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)cancelOutstandingRequests;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)hasUniqueID;
-(BOOL)hasApplicationIdentifier;
-(BOOL)requestAuthorization;
-(void)setRequestAuthorization:(BOOL)arg1 ;
-(void)setHasRequestAuthorization:(BOOL)arg1 ;
-(BOOL)hasRequestAuthorization;
-(void)setExpressPassInformation:(NSData *)arg1 ;
-(BOOL)hasExpressPassInformation;
-(NSData *)expressPassInformation;
-(void)setCancelOutstandingRequests:(BOOL)arg1 ;
-(void)setHasCancelOutstandingRequests:(BOOL)arg1 ;
-(BOOL)hasCancelOutstandingRequests;
@end

