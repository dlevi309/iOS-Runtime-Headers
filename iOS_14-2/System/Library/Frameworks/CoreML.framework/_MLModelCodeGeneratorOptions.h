/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@interface _MLModelCodeGeneratorOptions : NSObject {

	SwiftCodeGeneratorOptions _cValue;

}

@property (assign,nonatomic) BOOL documentation; 
@property (assign,nonatomic) BOOL globalModule; 
@property (assign,nonatomic) BOOL publicAccess; 
@property (assign,nonatomic) long long container; 
@property (readonly) SwiftCodeGeneratorOptions cValue;              //@synthesize cValue=_cValue - In the implementation block
+(id)options;
-(SwiftCodeGeneratorOptions)cValue;
-(void)setContainer:(long long)arg1 ;
-(void)setDocumentation:(BOOL)arg1 ;
-(BOOL)globalModule;
-(void)setGlobalModule:(BOOL)arg1 ;
-(BOOL)publicAccess;
-(void)setPublicAccess:(BOOL)arg1 ;
-(long long)container;
-(BOOL)documentation;
@end

