/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString;

@interface ADFrequencyCap : NSObject {

	NSString* _identifier;
	NSString* _adMetadata;
	long long _downloadType;
	double _setTime;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * adMetadata;               //@synthesize adMetadata=_adMetadata - In the implementation block
@property (assign,nonatomic) long long downloadType;              //@synthesize downloadType=_downloadType - In the implementation block
@property (assign,nonatomic) double setTime;                      //@synthesize setTime=_setTime - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(double)setTime;
-(void)setDownloadType:(long long)arg1 ;
-(long long)downloadType;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setAdMetadata:(NSString *)arg1 ;
-(NSString *)adMetadata;
-(id)splitCapData:(id)arg1 ;
-(void)setSetTime:(double)arg1 ;
@end

