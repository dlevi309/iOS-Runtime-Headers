/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {

	NSString* _printerID;
	NSString* _jobName;
	long long _outputType;
	long long _orientation;
	long long _duplex;
	long long _copies;
	BOOL _scaleUp;
	BOOL _staple;
	BOOL _punch;
	BOOL _imagePDFAnnotations;
	NSString* _jobAccountID;
	NSString* _pdfPassword;

}

@property (assign,nonatomic) long long copies;                                       //@synthesize copies=_copies - In the implementation block
@property (assign,nonatomic) BOOL staple;                                            //@synthesize staple=_staple - In the implementation block
@property (assign,nonatomic) BOOL punch;                                             //@synthesize punch=_punch - In the implementation block
@property (nonatomic,retain) NSString * jobAccountID;                                //@synthesize jobAccountID=_jobAccountID - In the implementation block
@property (assign,nonatomic) BOOL scaleUp;                                           //@synthesize scaleUp=_scaleUp - In the implementation block
@property (nonatomic,retain) NSString * pdfPassword;                                 //@synthesize pdfPassword=_pdfPassword - In the implementation block
@property (assign,nonatomic) BOOL imagePDFAnnotations;                               //@synthesize imagePDFAnnotations=_imagePDFAnnotations - In the implementation block
@property (nonatomic,copy) NSString * printerID;                                     //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * jobName;                                       //@synthesize jobName=_jobName - In the implementation block
@property (assign,nonatomic) long long outputType;                                   //@synthesize outputType=_outputType - In the implementation block
@property (assign,nonatomic) long long orientation;                                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long duplex;                                       //@synthesize duplex=_duplex - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)printInfo;
+(id)printInfoWithDictionary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NSString *)jobName;
-(long long)outputType;
-(BOOL)staple;
-(void)setStaple:(BOOL)arg1 ;
-(void)setPdfPassword:(NSString *)arg1 ;
-(long long)duplex;
-(BOOL)punch;
-(long long)copies;
-(NSString *)jobAccountID;
-(void)setCopies:(long long)arg1 ;
-(void)setDuplex:(long long)arg1 ;
-(void)setPunch:(BOOL)arg1 ;
-(void)setJobAccountID:(NSString *)arg1 ;
-(NSString *)printerID;
-(NSString *)pdfPassword;
-(void)setPrinterID:(NSString *)arg1 ;
-(void)setOutputType:(long long)arg1 ;
-(void)setScaleUp:(BOOL)arg1 ;
-(BOOL)scaleUp;
-(BOOL)imagePDFAnnotations;
-(void)setImagePDFAnnotations:(BOOL)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_updateWithPrinter:(id)arg1 ;
-(id)_createPrintSettingsForPrinter:(id)arg1 ;
-(void)setJobName:(NSString *)arg1 ;
@end

