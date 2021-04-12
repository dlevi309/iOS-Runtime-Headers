/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OCMapper.h>

@class NSURL, NSData, OCDReader, OITSUProgressContext, NSString;

@interface OCImporter : OCMapper {

	NSURL* mURL;
	NSData* mData;
	OCDReader* mReader;
	BOOL mTryAlternateReader;
	OITSUProgressContext* mProgressContext;
	/*^block*/id mOfficeDOMInspector;
	NSString* _lastPasswordAttempted;

}

@property (retain) OITSUProgressContext * progressContext; 
@property (nonatomic,copy) NSString * lastPasswordAttempted;              //@synthesize lastPasswordAttempted=_lastPasswordAttempted - In the implementation block
@property (nonatomic,copy) id officeDOMInspector; 
+(void)initialize;
+(id)xmlPathExtensions;
+(BOOL)URLIsXML:(id)arg1 ;
+(Class)xmlReaderClass;
+(Class)binaryReaderClass;
+(Class)readerClassForURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)start;
-(id)url;
-(void)setURL:(id)arg1 ;
-(id)filename;
-(id)displayName;
-(BOOL)setPassphrase:(id)arg1 ;
-(OITSUProgressContext *)progressContext;
-(void)setProgressContext:(OITSUProgressContext *)arg1 ;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3 ;
-(void)setLastPasswordAttempted:(NSString *)arg1 ;
-(BOOL)isXML;
-(BOOL)tryAlternateReader;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2 ;
-(void)finalizeWithDocumentState:(id)arg1 ;
-(Class)readerClass;
-(id)officeDOMInspector;
-(void)setOfficeDOMInspector:(id)arg1 ;
-(NSString *)lastPasswordAttempted;
@end

