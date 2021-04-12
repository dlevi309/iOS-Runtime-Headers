/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol CRSServing;
@class NSString;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {

	id<CRSServing> _service;

}

@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)underlyingService;
-(NSString *)serviceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)_initializeServiceWithClass:(Class)arg1 ;
@end

