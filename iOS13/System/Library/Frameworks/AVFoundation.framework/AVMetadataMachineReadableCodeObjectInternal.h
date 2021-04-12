/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(NSString *)stringValue;
-(NSArray *)corners;
-(void)setStringValue:(NSString *)arg1 ;
-(CIBarcodeDescriptor *)descriptor;
-(void)setDescriptor:(CIBarcodeDescriptor *)arg1 ;
-(void)setCorners:(NSArray *)arg1 ;
-(NSDictionary *)basicDescriptor;
-(void)setBasicDescriptor:(NSDictionary *)arg1 ;
-(BOOL)decoded;
-(void)setDecoded:(BOOL)arg1 ;
@end

