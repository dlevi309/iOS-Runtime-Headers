/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class FBSSceneMessage, NSString;

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {

	FBSSceneMessage* _message;

}

@property (nonatomic,copy) FBSSceneMessage * message;               //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessage:(FBSSceneMessage *)arg1 ;
-(FBSSceneMessage *)message;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

