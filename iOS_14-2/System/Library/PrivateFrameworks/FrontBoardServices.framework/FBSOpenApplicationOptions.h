/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSURL, NSString;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying> {

	NSMutableDictionary* _payload;

}

@property (nonatomic,copy) NSDictionary * dictionary;               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optionsWithDictionary:(id)arg1 ;
+(BOOL)supportsBSXPCSecureCoding;
-(id)succinctDescription;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)description;
-(NSDictionary *)dictionary;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)_sanitizeAndValidatePayload;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

