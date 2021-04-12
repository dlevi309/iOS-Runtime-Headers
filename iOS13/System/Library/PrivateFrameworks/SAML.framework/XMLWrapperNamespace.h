/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(id)initWithNsNode:(xmlNs*)arg1 error:(id*)arg2 ;
-(xmlNs*)xmlNsForNode:(xmlNode*)arg1 error:(id*)arg2 ;
@end

