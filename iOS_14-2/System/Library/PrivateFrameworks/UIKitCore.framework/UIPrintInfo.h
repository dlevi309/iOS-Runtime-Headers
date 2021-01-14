/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)printInfoWithDictionary:(id)arg1 ;
+(id)printInfo;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)punch;
-(BOOL)staple;
-(long long)duplex;
-(long long)copies;
-(id)init;
-(BOOL)scaleUp;
-(void)_updateWithPrinter:(id)arg1 ;
-(id)_createPrintSettingsForPrinter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStaple:(BOOL)arg1 ;
-(void)setPunch:(BOOL)arg1 ;
-(NSString *)printerID;
-(void)setCopies:(long long)arg1 ;
-(void)setDuplex:(long long)arg1 ;
-(long long)orientation;
-(id)initWithCoder:(id)arg1 ;
-(long long)outputType;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)jobName;
-(BOOL)imagePDFAnnotations;
-(void)setPdfPassword:(NSString *)arg1 ;
-(void)setJobAccountID:(NSString *)arg1 ;
-(NSString *)pdfPassword;
-(void)setScaleUp:(BOOL)arg1 ;
-(void)setJobName:(NSString *)arg1 ;
-(void)setPrinterID:(NSString *)arg1 ;
-(void)setOutputType:(long long)arg1 ;
-(void)setImagePDFAnnotations:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)jobAccountID;
-(void)setOrientation:(long long)arg1 ;
@end

