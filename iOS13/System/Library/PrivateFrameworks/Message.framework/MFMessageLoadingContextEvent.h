/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(MFMessageLoadingContext *)context;
-(void)setContext:(MFMessageLoadingContext *)arg1 ;
-(MFMailMessage *)message;
-(long long)transportType;
-(NSArray *)content;
-(void)setContent:(NSArray *)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(MFMimeBody *)loadedBody;
-(BOOL)hasLoadedBestAlternativePart;
-(BOOL)hasLoadedCompleteBody;
-(unsigned long long)remainingBytes;
-(NSError *)smimeError;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(void)setHasLoadedCompleteBody:(BOOL)arg1 ;
-(void)setHasLoadedBestAlternativePart:(BOOL)arg1 ;
-(void)setRemainingBytes:(unsigned long long)arg1 ;
-(MFMimePart *)loadedPart;
-(void)setLoadedPart:(MFMimePart *)arg1 ;
-(void)setLoadedBody:(MFMimeBody *)arg1 ;
@end

