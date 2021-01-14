/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableKeyedSettings, NSString;

@interface FBSSceneMessage : NSObject <NSCopying, BSXPCCoding, BSDescriptionProviding> {

	BSMutableKeyedSettings* _payload;

}

@property (nonatomic,copy,readonly) BSMutableKeyedSettings * payload;              //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)message;
-(id)succinctDescription;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BSMutableKeyedSettings *)payload;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithPayload:(id)arg1 ;
@end

