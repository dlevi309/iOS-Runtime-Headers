/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/

#import <PrintKit/PrintKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSArray, NSString, NSUUID, PKPaperList, NSNumber, NSURL;

@interface PKPrinter : NSObject <NSSecureCoding> {

	long long type;
	long long accessState;
	NSDictionary* printInfoSupported;
	http_sRef job_http;
	NSMutableDictionary* privateData;
	NSMutableDictionary* specialFeedOrientation;
	NSArray* printScalingSupported;
	NSArray* mandatoryJobAttributes;
	NSString* quotaManagementURL;
	int maxPDFKBytes;
	int maxJPEGKBytes;
	int maxJPEGXDimension;
	int maxJPEGYDimension;
	int maxCopies;
	int maxDocumentPasswordLength;
	int preferred_landscape;
	int printerStateReasons;
	int recentRssiValues[5];
	BOOL isLocal;
	BOOL hasIdentifyPrinterOp;
	BOOL connectionShouldNotBeTrusted;
	BOOL isFromMCProfile;
	long long identifyActionsSupported;
	NSString* name;
	long long kind;
	NSUUID* btleUUID;
	long long btleMeasuredPower;
	long long proximity;
	long long _jobAccountIDSupport;
	PKPaperList* _paperList;
	NSArray* _trays;
	NSArray* _jpegFeaturesSupported;

}

@property (assign) long long accessState; 
@property (retain) NSDictionary * TXTRecord; 
@property (retain) NSString * hostname; 
@property (retain) NSNumber * port; 
@property (retain,readonly) NSString * scheme; 
@property (retain) PKPaperList * paperList;                             //@synthesize paperList=_paperList - In the implementation block
@property (assign) long long jobAccountIDSupport;                       //@synthesize jobAccountIDSupport=_jobAccountIDSupport - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSArray * trays;                                     //@synthesize trays=_trays - In the implementation block
@property (retain) NSArray * jpegFeaturesSupported;                     //@synthesize jpegFeaturesSupported=_jpegFeaturesSupported - In the implementation block
@property (retain) NSUUID * btleUUID; 
@property (assign) long long btleMeasuredPower; 
@property (assign) long long proximity; 
@property (readonly) NSURL * printerURL; 
@property (readonly) long long kind; 
@property (readonly) long long identifyActionsSupported; 
@property (readonly) long long jobTypesSupported; 
@property (readonly) long long type; 
@property (readonly) long long accessState; 
@property (readonly) BOOL hasPrintInfoSupported; 
@property (readonly) NSDictionary * printInfoSupported; 
@property (readonly) BOOL isAdobeRGBSupported; 
@property (assign) BOOL isLocal; 
@property (assign) BOOL isFromMCProfile; 
@property (readonly) BOOL isIPPS; 
@property (readonly) NSString * uuid; 
@property (readonly) BOOL hasIdentifyPrinterOp; 
@property (readonly) BOOL needsSetup; 
@property (readonly) BOOL setupSupportsPasswordScope; 
@property (readonly) NSArray * localizedNamesOfEmptyTrays; 
+(BOOL)supportsSecureCoding;
+(id)printerWithName:(id)arg1 ;
+(BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2 ;
+(id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2 ;
+(BOOL)uriMatchesMCProfileAdded:(id)arg1 ;
+(BOOL)mcProfilePrintersOnlyAllowed;
+(id)defaultPrinter;
+(BOOL)ippsIsRequired;
+(id)requiredPDL;
+(id)hardcodedURIs;
+(void)listenForPrinterNotifications;
+(id)nameForHardcodedURI:(id)arg1 ;
+(BOOL)urfIsOptional;
+(ipp_sRef)getAttributes:(const char**)arg1 count:(int)arg2 fromURI:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)scheme;
-(NSNumber *)port;
-(void)setName:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(NSString *)uuid;
-(long long)kind;
-(id)displayName;
-(BOOL)resolve;
-(id)location;
-(NSString *)hostname;
-(long long)proximity;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)resolveWithTimeout:(int)arg1 ;
-(BOOL)isLocal;
-(id)localizedPrinterWarnings;
-(BOOL)knowsReadyPaperList;
-(PKPaperList *)paperList;
-(BOOL)hasPrintInfoSupported;
-(NSDictionary *)printInfoSupported;
-(BOOL)supportsJobAccountID;
-(long long)jobAccountIDSupport;
-(void)cancelUnlock;
-(long long)accessState;
-(BOOL)needsSetup;
-(void)unlockWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setupSupportsPasswordScope;
-(void)setupWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)showPassCodeForSetupWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)validatePassCode:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getSupplyLevels:(/*^block*/id)arg1 ;
-(BOOL)hasIdentifyPrinterOp;
-(void)identifySelf;
-(void)removeCredentialsFromKeychain;
-(id)availableRollPapersPreferBorderless:(BOOL)arg1 ;
-(BOOL)isPaperReady:(id)arg1 ;
-(id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4 ;
-(long long)startJob:(id)arg1 ofType:(id)arg2 ;
-(long long)finishJob;
-(long long)abortJob;
-(long long)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3 ;
-(long long)sendData:(const char*)arg1 ofLength:(long long)arg2 ;
-(id)papersForPhotoWithSize:(CGSize)arg1 ;
-(id)papersForDocumentWithSize:(CGSize)arg1 andDuplex:(BOOL)arg2 ;
-(id)papersForDocumentWithSize:(CGSize)arg1 scaleUpOnRoll:(BOOL)arg2 andDuplex:(BOOL)arg3 ;
-(NSURL *)printerURL;
-(long long)jobTypesSupported;
-(id)makeAndModel;
-(void)updateType;
-(id)localName;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(NSDictionary *)TXTRecord;
-(void)setProximity:(long long)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(http_addrlist_s*)lookup;
-(BOOL)isFromMCProfile;
-(id)paperListForDuplexMode:(id)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 forPhoto:(BOOL)arg2 ;
-(id)initWithName:(id)arg1 TXT:(id)arg2 ;
-(void)setAccessStateFromTXT;
-(id)TXTRecordWithTimeout:(int)arg1 ;
-(id)txtRecordObjectForKey:(id)arg1 ;
-(BOOL)resolveIfNeeded;
-(BOOL)isBonjour;
-(void)reconfirmWithForce:(BOOL)arg1 ;
-(void)setTrays:(NSArray *)arg1 ;
-(void)setJpegFeaturesSupported:(NSArray *)arg1 ;
-(ipp_sRef)getAttributes:(const char**)arg1 count:(int)arg2 ;
-(void)handlePrinterStateReasonsFromResponse:(ipp_sRef)arg1 ;
-(NSArray *)localizedNamesOfEmptyTrays;
-(BOOL)isIPPS;
-(long long)identifyActionsSupported;
-(ipp_sRef)getPrinterAttributes;
-(void)doMedia2:(ipp_sRef)arg1 ;
-(void)setJobAccountIDSupport:(long long)arg1 ;
-(void)checkOperations:(ipp_sRef)arg1 ;
-(ipp_sRef)getSupplyLevelAttributes;
-(NSArray *)trays;
-(void)setPaperList:(PKPaperList *)arg1 ;
-(long long)finalizeJob:(int)arg1 ;
-(void)aggdAppsAndPrinters;
-(ipp_sRef)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3 ;
-(id)privateObjectForKey:(id)arg1 ;
-(void)setPrivateObject:(id)arg1 forKey:(id)arg2 ;
-(long long)feedOrientation:(id)arg1 ;
-(BOOL)isAdobeRGBSupported;
-(void)setIsFromMCProfile:(BOOL)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 ;
-(NSUUID *)btleUUID;
-(void)setBtleUUID:(NSUUID *)arg1 ;
-(long long)btleMeasuredPower;
-(void)setBtleMeasuredPower:(long long)arg1 ;
-(NSArray *)jpegFeaturesSupported;
-(void)setAccessState:(long long)arg1 ;
-(id)initWithName:(id)arg1 TXTRecord:(id)arg2 ;
-(void)addRSSIValue:(id)arg1 ;
@end

