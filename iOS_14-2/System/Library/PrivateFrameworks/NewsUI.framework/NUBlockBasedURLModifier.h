/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUURLModifying.h>

@class NSString;

@interface NUBlockBasedURLModifier : NSObject <NUURLModifying> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modifierWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)modifyURL:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

