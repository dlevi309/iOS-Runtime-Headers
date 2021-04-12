/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXJSONObjectTransforming.h>

@class NSString;

@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming> {

	NSString* _key;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) id block;                       //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)concatenatingTransformerWithKey:(id)arg1 ;
+(id)transformerWithKey:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)mergingTransformerWithKey:(id)arg1 ;
-(NSString *)key;
-(id)block;
-(id)transformKey:(id)arg1 ;
-(id)transformObject:(id)arg1 otherObject:(id)arg2 ;
@end

