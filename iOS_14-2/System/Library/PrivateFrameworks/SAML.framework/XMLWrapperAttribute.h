/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@class NSString, XMLWrapperNamespace;

@interface XMLWrapperAttribute : NSObject {

	xmlAttr* _attributeNode;
	int _type;
	NSString* _name;
	NSString* _value;
	XMLWrapperNamespace* _ns;

}

@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) XMLWrapperNamespace * ns;              //@synthesize ns=_ns - In the implementation block
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
-(XMLWrapperNamespace *)ns;
-(void)setType:(int)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setNs:(XMLWrapperNamespace *)arg1 ;
-(int)type;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(id)initWithNode:(xmlAttr*)arg1 error:(id*)arg2 ;
-(BOOL)xmlAttrNodeForNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

