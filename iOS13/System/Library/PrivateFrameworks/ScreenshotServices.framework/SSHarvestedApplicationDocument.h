/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable> {

	NSData* _PDFData;
	long long _PDFPage;
	CGRect _PDFVisibleRect;

}

@property (nonatomic,copy) NSData * PDFData;                                //@synthesize PDFData=_PDFData - In the implementation block
@property (assign,nonatomic) long long PDFPage;                             //@synthesize PDFPage=_PDFPage - In the implementation block
@property (assign,nonatomic) CGRect PDFVisibleRect;                         //@synthesize PDFVisibleRect=_PDFVisibleRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setPDFPage:(long long)arg1 ;
-(long long)PDFPage;
-(NSString *)loggableDescription;
-(void)setPDFData:(NSData *)arg1 ;
-(void)setPDFVisibleRect:(CGRect)arg1 ;
-(NSData *)PDFData;
-(CGRect)PDFVisibleRect;
@end

