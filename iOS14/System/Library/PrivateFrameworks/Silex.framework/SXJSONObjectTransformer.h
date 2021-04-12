/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(NSString *)key;
-(id)transformKey:(id)arg1 ;
-(id)transformObject:(id)arg1 otherObject:(id)arg2 ;
@end

