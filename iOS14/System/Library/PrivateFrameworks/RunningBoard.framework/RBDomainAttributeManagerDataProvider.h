/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBDomainAttributeDataProviding.h>

@class NSString, NSDictionary;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding> {

	NSString* _path;
	NSDictionary* _rawTemplates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPath:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)validDomains;
-(id)validationErrors;
-(id)templatesByDomain;
@end

