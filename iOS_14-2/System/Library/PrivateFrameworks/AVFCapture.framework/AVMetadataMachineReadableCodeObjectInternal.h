/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class NSArray, NSString, NSDictionary, CIBarcodeDescriptor;

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject {

	NSArray* corners;
	NSString* stringValue;
	NSDictionary* basicDescriptor;
	BOOL decoded;
	CIBarcodeDescriptor* descriptor;

}

@property (retain) NSArray * corners; 
@property (retain) NSString * stringValue; 
@property (retain) NSDictionary * basicDescriptor; 
@property (assign) BOOL decoded; 
@property (retain) CIBarcodeDescriptor * descriptor; 
-(NSString *)stringValue;
-(CIBarcodeDescriptor *)descriptor;
-(void)setStringValue:(NSString *)arg1 ;
-(BOOL)decoded;
-(void)setDescriptor:(CIBarcodeDescriptor *)arg1 ;
-(NSArray *)corners;
-(void)setCorners:(NSArray *)arg1 ;
-(void)setDecoded:(BOOL)arg1 ;
-(void)dealloc;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
@end

