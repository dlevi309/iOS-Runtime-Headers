/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BSServiceConnectionEndpoint, NSString;

@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying> {

	BSServiceConnectionEndpoint* _endpoint;
	NSString* _identifier;
	NSString* _stringRepresentation;

}

@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsBSXPCSecureCoding;
-(NSString *)stringRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BSServiceConnectionEndpoint *)endpoint;
-(id)initWithIdentifier:(id)arg1 endpoint:(id)arg2 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

