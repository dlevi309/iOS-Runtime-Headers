/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandaloneImageSize, NPKProtoStandaloneRequestHeader, NSString;

@interface NPKProtoStandaloneInitializationRequest : PBRequest <NSCopying> {

	NPKProtoStandaloneImageSize* _passImageSize;
	NPKProtoStandaloneImageSize* _passThumbnailImageSize;
	NPKProtoStandaloneRequestHeader* _requestHeader;
	NSString* _userLanguageCode;
	BOOL _useSimulatedFlowController;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoStandaloneRequestHeader * requestHeader;                   //@synthesize requestHeader=_requestHeader - In the implementation block
@property (assign,nonatomic) BOOL hasUseSimulatedFlowController; 
@property (assign,nonatomic) BOOL useSimulatedFlowController;                                   //@synthesize useSimulatedFlowController=_useSimulatedFlowController - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLanguageCode; 
@property (nonatomic,retain) NSString * userLanguageCode;                                       //@synthesize userLanguageCode=_userLanguageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasPassImageSize; 
@property (nonatomic,retain) NPKProtoStandaloneImageSize * passImageSize;                       //@synthesize passImageSize=_passImageSize - In the implementation block
@property (nonatomic,readonly) BOOL hasPassThumbnailImageSize; 
@property (nonatomic,retain) NPKProtoStandaloneImageSize * passThumbnailImageSize;              //@synthesize passThumbnailImageSize=_passThumbnailImageSize - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setUserLanguageCode:(NSString *)arg1 ;
-(NSString *)userLanguageCode;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NPKProtoStandaloneRequestHeader *)requestHeader;
-(void)setRequestHeader:(NPKProtoStandaloneRequestHeader *)arg1 ;
-(void)setPassImageSize:(NPKProtoStandaloneImageSize *)arg1 ;
-(void)setPassThumbnailImageSize:(NPKProtoStandaloneImageSize *)arg1 ;
-(void)setUseSimulatedFlowController:(BOOL)arg1 ;
-(void)setHasUseSimulatedFlowController:(BOOL)arg1 ;
-(BOOL)hasUseSimulatedFlowController;
-(BOOL)hasUserLanguageCode;
-(BOOL)hasPassImageSize;
-(BOOL)hasPassThumbnailImageSize;
-(BOOL)useSimulatedFlowController;
-(NPKProtoStandaloneImageSize *)passImageSize;
-(NPKProtoStandaloneImageSize *)passThumbnailImageSize;
@end

