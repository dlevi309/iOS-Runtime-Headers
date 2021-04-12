/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	CAContext* _context;
	double _level;

}

@property (getter=_context,nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) long long alignment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_unsafe_level;
-(id)init;
-(long long)alignment;
-(BOOL)isExternalSceneLayer;
-(BOOL)isKeyboardProxyLayer;
-(void)_unsafe_captureLevel;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isCAContextLayer;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 ;
-(BOOL)isKeyboardLayer;
-(id)_context;
-(id)_succinctDescription;
-(void)dealloc;
@end

