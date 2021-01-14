/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


#import <SAML/SAML-Structs.h>
@class NSString;

@interface XMLWrapperNamespace : NSObject {

	xmlNs* _xmlNs;
	NSString* _href;
	NSString* _prefix;

}

@property (nonatomic,retain) NSString * href;                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
-(NSString *)href;
-(NSString *)prefix;
-(void)setHref:(NSString *)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(id)initWithNsNode:(xmlNs*)arg1 error:(id*)arg2 ;
-(xmlNs*)xmlNsForNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

