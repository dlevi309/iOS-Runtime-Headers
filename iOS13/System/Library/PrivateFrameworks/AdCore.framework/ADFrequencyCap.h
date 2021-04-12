/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(long long)downloadType;
-(void)setDownloadType:(long long)arg1 ;
-(double)setTime;
-(void)setAdMetadata:(NSString *)arg1 ;
-(NSString *)adMetadata;
-(id)splitCapData:(id)arg1 ;
-(void)setSetTime:(double)arg1 ;
@end

