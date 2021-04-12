/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
*/

#import <Foundation/NSBundle.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol CRSServing;
@class NSString;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {

	id<CRSServing> _service;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(id)underlyingService;
-(void)_initializeServiceWithClass:(Class)arg1 ;
@end

