/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionActivity.h>

@class NSString, UIImage;

@interface SXBlockActionActivity : NSObject <SXActionActivity> {

	NSString* _label;
	unsigned long long _type;
	UIImage* _image;
	/*^block*/id _genericBlock;
	/*^block*/id _immediateBlock;
	/*^block*/id _userSelectedBlock;

}

@property (nonatomic,copy,readonly) id genericBlock;                   //@synthesize genericBlock=_genericBlock - In the implementation block
@property (nonatomic,copy,readonly) id immediateBlock;                 //@synthesize immediateBlock=_immediateBlock - In the implementation block
@property (nonatomic,copy,readonly) id userSelectedBlock;              //@synthesize userSelectedBlock=_userSelectedBlock - In the implementation block
@property (nonatomic,readonly) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImage *)image;
-(unsigned long long)type;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(void)invokeWithAction:(id)arg1 invocationMethod:(unsigned long long)arg2 ;
-(id)initWithLabel:(id)arg1 image:(id)arg2 type:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)genericBlock;
-(id)userSelectedBlock;
-(id)immediateBlock;
-(id)initWithLabel:(id)arg1 type:(unsigned long long)arg2 immediateBlock:(/*^block*/id)arg3 userSelectedBlock:(/*^block*/id)arg4 ;
@end

