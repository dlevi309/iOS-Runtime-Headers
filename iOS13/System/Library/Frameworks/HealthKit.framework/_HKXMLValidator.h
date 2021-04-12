/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@interface _HKXMLValidator : NSObject {

	xmlSchemaRef _xsdSchema;

}
+(id)validatorWithXSD:(id)arg1 ;
+(id)validatorWithPathToXSD:(id)arg1 ;
-(void)dealloc;
-(id)_initWithSchema:(xmlSchemaRef)arg1 ;
-(BOOL)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3 ;
@end

