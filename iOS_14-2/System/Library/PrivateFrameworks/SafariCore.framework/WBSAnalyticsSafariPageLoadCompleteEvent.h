/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying> {

	unsigned long long _configurationID;
	long long _errorCode;
	unsigned long long _pageID;
	unsigned long long _pageLoadTime;
	unsigned long long _timestamp;
	SCD_Struct_WB6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasConfigurationID; 
@property (assign,nonatomic) unsigned long long configurationID;              //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) BOOL hasPageID; 
@property (assign,nonatomic) unsigned long long pageID;                       //@synthesize pageID=_pageID - In the implementation block
@property (assign,nonatomic) BOOL hasPageLoadTime; 
@property (assign,nonatomic) unsigned long long pageLoadTime;                 //@synthesize pageLoadTime=_pageLoadTime - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasPageID;
-(unsigned long long)timestamp;
-(unsigned long long)pageID;
-(void)setPageLoadTime:(unsigned long long)arg1 ;
-(unsigned long long)configurationID;
-(void)setConfigurationID:(unsigned long long)arg1 ;
-(void)setHasConfigurationID:(BOOL)arg1 ;
-(BOOL)hasConfigurationID;
-(void)setHasPageID:(BOOL)arg1 ;
-(void)setHasPageLoadTime:(BOOL)arg1 ;
-(BOOL)hasPageLoadTime;
-(unsigned long long)pageLoadTime;
-(void)mergeFrom:(id)arg1 ;
-(long long)errorCode;
-(void)setPageID:(unsigned long long)arg1 ;
-(BOOL)hasErrorCode;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

