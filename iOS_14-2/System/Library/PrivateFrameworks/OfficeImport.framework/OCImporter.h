/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(BOOL)start;
-(id)filename;
-(void)setURL:(id)arg1 ;
-(BOOL)isXML;
-(id)initWithData:(id)arg1 ;
-(id)url;
-(id)displayName;
-(BOOL)setPassphrase:(id)arg1 ;
-(void)dealloc;
-(void)setProgressContext:(OITSUProgressContext *)arg1 ;
-(OITSUProgressContext *)progressContext;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3 ;
-(void)setLastPasswordAttempted:(NSString *)arg1 ;
-(BOOL)tryAlternateReader;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2 ;
-(void)finalizeWithDocumentState:(id)arg1 ;
-(Class)readerClass;
-(id)officeDOMInspector;
-(void)setOfficeDOMInspector:(id)arg1 ;
-(NSString *)lastPasswordAttempted;
@end

