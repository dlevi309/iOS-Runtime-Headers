/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface PKWebServiceRequest : NSObject <NSSecureCoding> {

	NSMutableArray* _diagnosticReasonsList;
	NSString* _boundInterfaceIdentifier;

}

@property (nonatomic,copy) NSString * boundInterfaceIdentifier;              //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticReasons; 
+(BOOL)supportsSecureCoding;
+(id)_HTTPBodyWithDictionary:(id)arg1 ;
-(void)setBoundInterfaceIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addDiagnosticReason:(id)arg1 ;
-(NSString *)boundInterfaceIdentifier;
-(id)_murlRequestWithURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(NSArray *)diagnosticReasons;
-(id)_murlRequestWithURL:(id)arg1 ;
-(id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
@end

