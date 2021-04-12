/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationSizeCallAction : CXCallAction {

	CGSize _videoPresentationSize;

}

@property (assign,nonatomic) CGSize videoPresentationSize;              //@synthesize videoPresentationSize=_videoPresentationSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(CGSize)videoPresentationSize;
-(void)setVideoPresentationSize:(CGSize)arg1 ;
-(id)initWithCallUUID:(id)arg1 videoPresentationSize:(CGSize)arg2 ;
@end

