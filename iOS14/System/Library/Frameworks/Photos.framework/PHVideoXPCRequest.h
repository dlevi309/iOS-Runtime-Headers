/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHResourceRequest.h>

@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest : PHResourceRequest {

	PHVideoRequestBehaviorSpec* _behaviorSpec;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) PHVideoRequestBehaviorSpec * behaviorSpec;              //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
+(BOOL)supportsSecureCoding;
-(PHVideoRequestBehaviorSpec *)behaviorSpec;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(CGSize)arg3 behavior:(id)arg4 ;
@end

