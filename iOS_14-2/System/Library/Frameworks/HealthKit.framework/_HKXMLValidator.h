/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

