/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString;

@interface CRKFetchChaptersRequest : CATTaskRequest {

	NSString* _path;
	NSString* _identifierType;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * identifierType;              //@synthesize identifierType=_identifierType - In the implementation block
@property (nonatomic,copy) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifierType:(NSString *)arg1 ;
-(NSString *)identifierType;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

