/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _validRequest;
	NSArray* _certificateDataCollection;

}

@property (getter=isValidRequest,nonatomic,readonly) BOOL validRequest;               //@synthesize validRequest=_validRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * certificateDataCollection;              //@synthesize certificateDataCollection=_certificateDataCollection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)invalidResult;
+(id)resultWithCertificateDataCollection:(id)arg1 ;
-(BOOL)isEqualToResult:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValidRequest;
-(NSArray *)certificateDataCollection;
-(id)initWithIsValidRequest:(BOOL)arg1 certificateDataCollection:(id)arg2 ;
@end

