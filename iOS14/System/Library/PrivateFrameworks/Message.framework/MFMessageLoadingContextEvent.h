/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class MFMessageLoadingContext, NSArray, NSError, MFMimePart, MFMimeBody, MFMailMessage;

@interface MFMessageLoadingContextEvent : NSObject {

	BOOL _hasLoadedCompleteBody;
	BOOL _hasLoadedBestAlternativePart;
	MFMessageLoadingContext* _context;
	NSArray* _content;
	unsigned long long _remainingBytes;
	long long _transportType;
	NSError* _error;
	MFMimePart* _loadedPart;
	MFMimeBody* _loadedBody;

}

@property (assign,nonatomic,__weak) MFMessageLoadingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * content;                                       //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedCompleteBody;                            //@synthesize hasLoadedCompleteBody=_hasLoadedCompleteBody - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedBestAlternativePart;                     //@synthesize hasLoadedBestAlternativePart=_hasLoadedBestAlternativePart - In the implementation block
@property (assign,nonatomic) unsigned long long remainingBytes;                     //@synthesize remainingBytes=_remainingBytes - In the implementation block
@property (assign,nonatomic) long long transportType;                               //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSError * smimeError; 
@property (nonatomic,retain) MFMimePart * loadedPart;                               //@synthesize loadedPart=_loadedPart - In the implementation block
@property (nonatomic,retain) MFMimeBody * loadedBody;                               //@synthesize loadedBody=_loadedBody - In the implementation block
@property (nonatomic,readonly) MFMailMessage * message; 
-(MFMailMessage *)message;
-(BOOL)hasLoadedBestAlternativePart;
-(BOOL)hasLoadedCompleteBody;
-(unsigned long long)remainingBytes;
-(NSArray *)content;
-(void)setContent:(NSArray *)arg1 ;
-(void)setLoadedPart:(MFMimePart *)arg1 ;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(void)setHasLoadedCompleteBody:(BOOL)arg1 ;
-(void)setHasLoadedBestAlternativePart:(BOOL)arg1 ;
-(void)setRemainingBytes:(unsigned long long)arg1 ;
-(void)setLoadedBody:(MFMimeBody *)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(id)debugDescription;
-(MFMessageLoadingContext *)context;
-(void)setError:(NSError *)arg1 ;
-(long long)transportType;
-(NSError *)error;
-(id)description;
-(NSError *)smimeError;
-(MFMimePart *)loadedPart;
-(MFMimeBody *)loadedBody;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
@end

