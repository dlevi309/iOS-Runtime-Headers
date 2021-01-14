/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <libobjc.A.dylib/MDLNamed.h>

@class MDLMaterialProperty, NSString;

@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {

	MDLMaterialProperty* _input;
	MDLMaterialProperty* _output;
	NSString* _name;

}

@property (nonatomic,__weak,readonly) MDLMaterialProperty * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,__weak,readonly) MDLMaterialProperty * input;               //@synthesize input=_input - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
-(MDLMaterialProperty *)input;
-(MDLMaterialProperty *)output;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithOutput:(id)arg1 input:(id)arg2 ;
@end

