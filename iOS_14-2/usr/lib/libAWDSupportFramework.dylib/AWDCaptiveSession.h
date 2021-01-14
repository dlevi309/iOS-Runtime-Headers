/*
* Generated on Thursday, January 14, 2021 at 2:28:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDCaptiveSession : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _appTriggeredPassiveSymptom;
	NSString* _autoLoginCarrierID;
	unsigned _autoLoginType;
	unsigned _durationNetworkNotCaptive;
	unsigned _durationOnNetwork;
	NSString* _handlerCNP;
	NSMutableArray* _installedCNPDisplayIDs;
	unsigned _passiveCaptivityCorrectDetection;
	unsigned _passiveCaptivityIncorrectDetection;
	unsigned _passiveCaptivitySymptom;
	int _redirectURLType;
	unsigned _result;
	unsigned _websheetProbeCount;
	unsigned _websheetScrapeResult;
	unsigned _whiteListProbeCompletionTime;
	int _whiteListProbeStatus;
	BOOL _autoLoginFailed;
	BOOL _detectedNotCaptiveHandledByCNP;
	BOOL _handlerCNPTriggeredLogOff;
	BOOL _isDetectedCaptive;
	BOOL _nonCaptiveDetectedAsCaptive;
	BOOL _passiveCaptivityDetected;
	BOOL _websheetScraped;
	BOOL _wisprDetected;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                                          //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetProbeCount; 
@property (assign,nonatomic) unsigned websheetProbeCount;                              //@synthesize websheetProbeCount=_websheetProbeCount - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScraped; 
@property (assign,nonatomic) BOOL websheetScraped;                                     //@synthesize websheetScraped=_websheetScraped - In the implementation block
@property (assign,nonatomic) BOOL hasWebsheetScrapeResult; 
@property (assign,nonatomic) unsigned websheetScrapeResult;                            //@synthesize websheetScrapeResult=_websheetScrapeResult - In the implementation block
@property (nonatomic,retain) NSMutableArray * installedCNPDisplayIDs;                  //@synthesize installedCNPDisplayIDs=_installedCNPDisplayIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasHandlerCNP; 
@property (nonatomic,retain) NSString * handlerCNP;                                    //@synthesize handlerCNP=_handlerCNP - In the implementation block
@property (assign,nonatomic) BOOL hasDetectedNotCaptiveHandledByCNP; 
@property (assign,nonatomic) BOOL detectedNotCaptiveHandledByCNP;                      //@synthesize detectedNotCaptiveHandledByCNP=_detectedNotCaptiveHandledByCNP - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginType; 
@property (assign,nonatomic) unsigned autoLoginType;                                   //@synthesize autoLoginType=_autoLoginType - In the implementation block
@property (assign,nonatomic) BOOL hasAutoLoginFailed; 
@property (assign,nonatomic) BOOL autoLoginFailed;                                     //@synthesize autoLoginFailed=_autoLoginFailed - In the implementation block
@property (nonatomic,readonly) BOOL hasAutoLoginCarrierID; 
@property (nonatomic,retain) NSString * autoLoginCarrierID;                            //@synthesize autoLoginCarrierID=_autoLoginCarrierID - In the implementation block
@property (assign,nonatomic) BOOL hasWisprDetected; 
@property (assign,nonatomic) BOOL wisprDetected;                                       //@synthesize wisprDetected=_wisprDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityDetected; 
@property (assign,nonatomic) BOOL passiveCaptivityDetected;                            //@synthesize passiveCaptivityDetected=_passiveCaptivityDetected - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityCorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityCorrectDetection;                //@synthesize passiveCaptivityCorrectDetection=_passiveCaptivityCorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivityIncorrectDetection; 
@property (assign,nonatomic) unsigned passiveCaptivityIncorrectDetection;              //@synthesize passiveCaptivityIncorrectDetection=_passiveCaptivityIncorrectDetection - In the implementation block
@property (assign,nonatomic) BOOL hasHandlerCNPTriggeredLogOff; 
@property (assign,nonatomic) BOOL handlerCNPTriggeredLogOff;                           //@synthesize handlerCNPTriggeredLogOff=_handlerCNPTriggeredLogOff - In the implementation block
@property (assign,nonatomic) BOOL hasIsDetectedCaptive; 
@property (assign,nonatomic) BOOL isDetectedCaptive;                                   //@synthesize isDetectedCaptive=_isDetectedCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasDurationOnNetwork; 
@property (assign,nonatomic) unsigned durationOnNetwork;                               //@synthesize durationOnNetwork=_durationOnNetwork - In the implementation block
@property (assign,nonatomic) BOOL hasDurationNetworkNotCaptive; 
@property (assign,nonatomic) unsigned durationNetworkNotCaptive;                       //@synthesize durationNetworkNotCaptive=_durationNetworkNotCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasPassiveCaptivitySymptom; 
@property (assign,nonatomic) unsigned passiveCaptivitySymptom;                         //@synthesize passiveCaptivitySymptom=_passiveCaptivitySymptom - In the implementation block
@property (nonatomic,readonly) BOOL hasAppTriggeredPassiveSymptom; 
@property (nonatomic,retain) NSString * appTriggeredPassiveSymptom;                    //@synthesize appTriggeredPassiveSymptom=_appTriggeredPassiveSymptom - In the implementation block
@property (assign,nonatomic) BOOL hasNonCaptiveDetectedAsCaptive; 
@property (assign,nonatomic) BOOL nonCaptiveDetectedAsCaptive;                         //@synthesize nonCaptiveDetectedAsCaptive=_nonCaptiveDetectedAsCaptive - In the implementation block
@property (assign,nonatomic) BOOL hasRedirectURLType; 
@property (assign,nonatomic) int redirectURLType;                                      //@synthesize redirectURLType=_redirectURLType - In the implementation block
@property (assign,nonatomic) BOOL hasWhiteListProbeStatus; 
@property (assign,nonatomic) int whiteListProbeStatus;                                 //@synthesize whiteListProbeStatus=_whiteListProbeStatus - In the implementation block
@property (assign,nonatomic) BOOL hasWhiteListProbeCompletionTime; 
@property (assign,nonatomic) unsigned whiteListProbeCompletionTime;                    //@synthesize whiteListProbeCompletionTime=_whiteListProbeCompletionTime - In the implementation block
+(Class)installedCNPDisplayIDsType;
-(void)setResult:(unsigned)arg1 ;
-(BOOL)hasPassiveCaptivityDetected;
-(id)dictionaryRepresentation;
-(BOOL)hasResult;
-(void)setHasWebsheetScraped:(BOOL)arg1 ;
-(void)setPassiveCaptivityDetected:(BOOL)arg1 ;
-(unsigned)passiveCaptivityCorrectDetection;
-(void)setDurationNetworkNotCaptive:(unsigned)arg1 ;
-(BOOL)nonCaptiveDetectedAsCaptive;
-(void)setHasWhiteListProbeCompletionTime:(BOOL)arg1 ;
-(BOOL)hasWebsheetProbeCount;
-(void)setHasWisprDetected:(BOOL)arg1 ;
-(void)setHasDurationOnNetwork:(BOOL)arg1 ;
-(void)setHasIsDetectedCaptive:(BOOL)arg1 ;
-(BOOL)hasPassiveCaptivitySymptom;
-(unsigned)websheetProbeCount;
-(unsigned long long)timestamp;
-(void)setHasResult:(BOOL)arg1 ;
-(NSString *)handlerCNP;
-(BOOL)hasWebsheetScrapeResult;
-(void)setWhiteListProbeStatus:(int)arg1 ;
-(void)setIsDetectedCaptive:(BOOL)arg1 ;
-(void)setHasPassiveCaptivitySymptom:(BOOL)arg1 ;
-(BOOL)autoLoginFailed;
-(void)setHasWebsheetScrapeResult:(BOOL)arg1 ;
-(void)setPassiveCaptivityIncorrectDetection:(unsigned)arg1 ;
-(void)setPassiveCaptivitySymptom:(unsigned)arg1 ;
-(void)setHasWebsheetProbeCount:(BOOL)arg1 ;
-(BOOL)wisprDetected;
-(void)setHasNonCaptiveDetectedAsCaptive:(BOOL)arg1 ;
-(int)redirectURLType;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasPassiveCaptivityIncorrectDetection:(BOOL)arg1 ;
-(void)setHasPassiveCaptivityCorrectDetection:(BOOL)arg1 ;
-(BOOL)handlerCNPTriggeredLogOff;
-(BOOL)hasWisprDetected;
-(void)setPassiveCaptivityCorrectDetection:(unsigned)arg1 ;
-(BOOL)passiveCaptivityDetected;
-(id)whiteListProbeStatusAsString:(int)arg1 ;
-(void)setNonCaptiveDetectedAsCaptive:(BOOL)arg1 ;
-(BOOL)hasDurationNetworkNotCaptive;
-(BOOL)hasRedirectURLType;
-(BOOL)hasAutoLoginCarrierID;
-(BOOL)hasWhiteListProbeStatus;
-(void)setWebsheetScraped:(BOOL)arg1 ;
-(BOOL)hasHandlerCNPTriggeredLogOff;
-(int)StringAsRedirectURLType:(id)arg1 ;
-(void)setHasDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(void)setAutoLoginCarrierID:(NSString *)arg1 ;
-(BOOL)hasNonCaptiveDetectedAsCaptive;
-(BOOL)hasPassiveCaptivityIncorrectDetection;
-(unsigned)websheetScrapeResult;
-(unsigned long long)installedCNPDisplayIDsCount;
-(id)description;
-(unsigned)passiveCaptivityIncorrectDetection;
-(void)addInstalledCNPDisplayIDs:(id)arg1 ;
-(BOOL)isDetectedCaptive;
-(unsigned)durationNetworkNotCaptive;
-(void)setHasRedirectURLType:(BOOL)arg1 ;
-(void)setWebsheetProbeCount:(unsigned)arg1 ;
-(void)setWebsheetScrapeResult:(unsigned)arg1 ;
-(BOOL)hasDurationOnNetwork;
-(void)clearInstalledCNPDisplayIDs;
-(unsigned)whiteListProbeCompletionTime;
-(void)setHasAutoLoginType:(BOOL)arg1 ;
-(void)setDurationOnNetwork:(unsigned)arg1 ;
-(unsigned)passiveCaptivitySymptom;
-(NSString *)autoLoginCarrierID;
-(void)setAutoLoginFailed:(BOOL)arg1 ;
-(void)setHasDurationNetworkNotCaptive:(BOOL)arg1 ;
-(void)setInstalledCNPDisplayIDs:(NSMutableArray *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned)result;
-(unsigned)durationOnNetwork;
-(BOOL)hasTimestamp;
-(BOOL)hasWebsheetScraped;
-(BOOL)hasHandlerCNP;
-(void)setHasPassiveCaptivityDetected:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWisprDetected:(BOOL)arg1 ;
-(BOOL)websheetScraped;
-(void)setHasHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(BOOL)detectedNotCaptiveHandledByCNP;
-(BOOL)hasAutoLoginType;
-(BOOL)hasAppTriggeredPassiveSymptom;
-(void)copyTo:(id)arg1 ;
-(void)setHasWhiteListProbeStatus:(BOOL)arg1 ;
-(BOOL)hasAutoLoginFailed;
-(void)setHandlerCNP:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIsDetectedCaptive;
-(void)setAppTriggeredPassiveSymptom:(NSString *)arg1 ;
-(void)setWhiteListProbeCompletionTime:(unsigned)arg1 ;
-(unsigned)autoLoginType;
-(void)setDetectedNotCaptiveHandledByCNP:(BOOL)arg1 ;
-(int)StringAsWhiteListProbeStatus:(id)arg1 ;
-(int)whiteListProbeStatus;
-(void)setRedirectURLType:(int)arg1 ;
-(NSString *)appTriggeredPassiveSymptom;
-(NSMutableArray *)installedCNPDisplayIDs;
-(BOOL)hasWhiteListProbeCompletionTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasAutoLoginFailed:(BOOL)arg1 ;
-(void)setHandlerCNPTriggeredLogOff:(BOOL)arg1 ;
-(id)redirectURLTypeAsString:(int)arg1 ;
-(BOOL)hasDetectedNotCaptiveHandledByCNP;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)installedCNPDisplayIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPassiveCaptivityCorrectDetection;
-(void)setAutoLoginType:(unsigned)arg1 ;
@end

