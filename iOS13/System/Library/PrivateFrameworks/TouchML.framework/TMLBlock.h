/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <libobjc.A.dylib/TMLBlockJSExports.h>

@interface TMLBlock : NSObject <TMLBlockJSExports> {

	id _block;

}

@property (nonatomic,readonly) id blockValue; 
+(void)initializeJSContext:(id)arg1 ;
+(id)blockWithFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
+(id)createBlockForJSFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
+(id)blockWithFunction:(id)arg1 ;
+(void)callBlock:(id)arg1 arguments:(id)arg2 ;
-(void)dealloc;
-(id)initWithFunction:(id)arg1 argumentsEncoding:(id)arg2 ;
-(id)blockValue;
@end

