/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)path;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)identifierType;
-(void)setIdentifierType:(NSString *)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

