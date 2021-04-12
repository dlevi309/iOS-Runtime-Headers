/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding> {

	BOOL _includeUntrustedDevices;
	BOOL _includeFamilyDevices;
	NSString* _altDSID;
	NSArray* _services;
	NSArray* _operatingSystems;

}

@property (nonatomic,copy) NSString * altDSID;                          //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) BOOL includeUntrustedDevices;              //@synthesize includeUntrustedDevices=_includeUntrustedDevices - In the implementation block
@property (assign,nonatomic) BOOL includeFamilyDevices;                 //@synthesize includeFamilyDevices=_includeFamilyDevices - In the implementation block
@property (nonatomic,copy) NSArray * services;                          //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) NSArray * operatingSystems;                  //@synthesize operatingSystems=_operatingSystems - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)services;
-(BOOL)includeUntrustedDevices;
-(BOOL)includeFamilyDevices;
-(void)setIncludeFamilyDevices:(BOOL)arg1 ;
-(NSArray *)operatingSystems;
-(void)setServices:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIncludeUntrustedDevices:(BOOL)arg1 ;
-(void)setOperatingSystems:(NSArray *)arg1 ;
@end

